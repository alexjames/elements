## SSL/TLS encryption process
1. Client requests SSL connection (SSL Hello).
2. Server responds with SSL certificate.
3. Client validates server's certificate.
4. Client generates a symmetric key and transmits to server, encrypted using server's public key.
5. SSL session established.
