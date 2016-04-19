' Caesar Cipher Brute Force '

cipher = "OVDTHUFWVZZPISLRLFZHYLAOLYL"

def shiftbyk(ch, k):
    if ord(ch) < 91:
        n = ord(ch) - ord('A')
        n = (n + k) % 26
        return chr(ord('A') + n)
    else:
        n = ord(ch) - ord('a')
        n = (n + k) % 26
        return chr(ord('a') + n)


for key in range (1, 27):
    m = ""
    for i in range (0, len(cipher)):
        m += shiftbyk(cipher[i], key)

    print "Shift by k = " + str(key) + ": " + m

