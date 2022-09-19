#include <stdio.h>
int main()
{
    char c;
  //  int lowercase_vowel, uppercase_vowel;
    printf("Enter the character: ");
    scanf("%c",&c);

    //lowercase_vowel=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    //uppercase_vowel=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
   // (lowercase_vowel || uppercase_vowel)
    (c=='a')||(c=='e')||(c=='i')||(c=='o')||(c=='u')||(c=='A')||(c=='E')||(c=='I')||(c=='O')||(c=='U')?printf("%c is a vowel",c):printf("%c is a consonant");
    return 0;
}
