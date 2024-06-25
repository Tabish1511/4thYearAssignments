
Table HOM_67737900 created.


1 row inserted.


1 row inserted.


1 row inserted.


1 row inserted.


1 row inserted.


1 row inserted.


Error starting at line : 1 in command -
CREATE TABLE TMSC_67737900 (
    Mall_ID VARCHAR(20) PRIMARY KEY,
    Location VARCHAR(20),
    CONSTRAINT PK_Mall_ID PRIMARY KEY (Mall_ID)
)
Error report -
ORA-02260: table can have only one primary key
02260. 00000 -  "table can have only one primary key"
*Cause:    Self-evident.
*Action:   Remove the extra primary key.

Table TMSC_67737900 created.

