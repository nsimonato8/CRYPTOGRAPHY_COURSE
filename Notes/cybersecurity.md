# Cybersecurity Principles and Practices

## Concept of security
A system is **secure** when it respects the *CIA triade*:
 * Confidentiality
 * Integrity
 * Authentication

There are also other features: availabilty, ...

The goal is *preserving those properties* of *the data and services provided*.

## Types of attackers
Basing on the provenience:
* **Insiders** are the attackers *inside the security domain*. They are responsible for most of the attacks.
* **Outsiders** are threats that come from *outside the security domain*.

Basing on the kind of activity:
* **Passive** attackers are attackers that can only read information (spoofing).
* **Active** attackers can interact with the information.

## Terminology
Chapter 1 of the book "Computer Security
Principles and Practice".

 * **Asset** or **System Resource**
 * **Threat**
 * **Risk** is the probability of a threat to happen.
 * **Countermeasure** are means used to deal with threats. They may *prevent, detect or recover* from an attack.
 * **Vulnerability**

## User Authentication
Two phases:
 * Identification --> Specify the identifier
 * Verification --> Bind the identity to the identifier

Four ways to authenticate (something you):
 * know (password)
 * are (static biometrics, es. fingerprint)
 * possess (key, smartcard)
 * do (dynamic biometrics, es. voice)

This methods can be combined.
All this methods have issues.

## Passord Authentication
 * The tuple **(username, password)** identifies the user.
 * The password must be conserved by the user and it must not publish it.

### Possible attacks
 * dictionary attack
 * workstation hijacking
 * multiple use of the same password
 * use of a popular password
 * specific account attack (using password that the user probably uses)
