import * as THREE from "https://unpkg.com/three@0.127.0/build/three.module.js";
import { OrbitControls } from "https://unpkg.com/three@0.127.0/examples/jsm/controls/OrbitControls.js";

/**
 * Renderer
 */
const renderer = new THREE.WebGLRenderer();
renderer.setSize(window.innerWidth, window.innerHeight);
document.body.appendChild(renderer.domElement);

// Scene
const scene = new THREE.Scene()

/**
 * All Planets
 */
const geometry = new THREE.SphereGeometry(15, 50, 50)
const material = new THREE.MeshBasicMaterial({ color: 0xffff00 })
const sun = new THREE.Mesh(geometry, material)
scene.add(sun)

const genratePlanet = (size, planetColor, x) => {
  const planetGeometry = new THREE.SphereGeometry(size, 50, 50);
  const planetMaterial = new THREE.MeshBasicMaterial({
    color: planetColor,
  });
  const planet = new THREE.Mesh(planetGeometry, planetMaterial);
  const planetObj = new THREE.Object3D();
  planet.position.set(x, 0, 0);
  
  scene.add(planetObj);

  planetObj.add(planet);
  return {
    planetObj: planetObj,
    planet: planet,
  };
};

const planets = [
  {
    ...genratePlanet(3.2, "red", 28),
    rotaing_speed_around_sun: 0.004,
    self_rotation_speed: 0.004,
  },
  {
    ...genratePlanet(5.8, "green", 44),
    rotaing_speed_around_sun: 0.015,
    self_rotation_speed: 0.002,
  },
  {
    ...genratePlanet(6, "blue", 62),
    rotaing_speed_around_sun: 0.01,
    self_rotation_speed: 0.02,
  },
  {
    ...genratePlanet(4, "red", 78),
    rotaing_speed_around_sun: 0.008,
    self_rotation_speed: 0.018,
  },
  {
    ...genratePlanet(12, "green", 100),
    rotaing_speed_around_sun: 0.002,
    self_rotation_speed: 0.04,
  },
  {
    ...genratePlanet(10, "blue", 138),
    rotaing_speed_around_sun: 0.0009,
    self_rotation_speed: 0.038,
  },
  {
    ...genratePlanet(7, "red", 176),
    rotaing_speed_around_sun: 0.0004,
    self_rotation_speed: 0.03,
  },
  {
    ...genratePlanet(7, "green", 200),
    rotaing_speed_around_sun: 0.0001,
    self_rotation_speed: 0.032,
  },
  {
    ...genratePlanet(2.8, "blue", 216),
    rotaing_speed_around_sun: 0.0007,
    self_rotation_speed: 0.008,
  },
];

/**
 * GUI Controls
 */
var GUI = dat.gui.GUI;
const gui = new GUI();
const options = {
  speed: 0.4,
};
const maxSpeed = new URL(window.location.href).searchParams.get("ms")*1
gui.add(options, "speed", 0, maxSpeed?maxSpeed:20);

/**
 * Animation
 */
function animate(time) {
  sun.rotateY(options.speed * 0.004);
  planets.forEach(
    ({ planetObj, planet, rotaing_speed_around_sun, self_rotation_speed }) => {
      planetObj.rotateY(options.speed * rotaing_speed_around_sun);
      planet.rotateY(options.speed * self_rotation_speed);
    }
  );
  renderer.render(scene, camera);
}
renderer.setAnimationLoop(animate);

/**
 * Camera
 */
const camera = new THREE.PerspectiveCamera(
  75,
  window.innerWidth / window.innerHeight,
  0.1,
  1000
);
camera.position.set(20, 30, 110);
scene.add(camera)

/**
 * Orbit control with mouse
 */
const orbit = new OrbitControls(camera, renderer.domElement);

/**
 * Resize Camera Size On Render
 */
window.addEventListener("resize", () => {
  camera.aspect = window.innerWidth / window.innerHeight;
  camera.updateProjectionMatrix();
  renderer.setSize(window.innerWidth, window.innerHeight);
});