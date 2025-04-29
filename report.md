# Secure Coding Review Report

## Objective
To analyze a simple C program for security flaws and apply secure coding practices to mitigate potential vulnerabilities.

## Tools Used
- Language: C
- Manual code review
- Compiler: GCC

## Vulnerable Code Summary
The original code used `gets()` for input and stored credentials in plain text.

## Vulnerabilities Found
- Buffer Overflow using `gets()`
- Hardcoded credentials
- No encryption or hashing

## Secure Version
- Replaced `gets()` with `fgets()`
- Removed hardcoded sensitive inputs
- Added newline character trimming

## Conclusion
The code has been reviewed and improved using secure coding standards.
