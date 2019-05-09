Diferenta intre char s1[100] = "Ana", char s2[] = "Ana", char *s3="Ana"

1.  Folosind s1[100] = "Ana", alocam noi 100 de bytes pentru a memora string-ul, operatie 
    ce este ineficienta in cazul acesta, fiind necesari doar 4 bytes pentru a-l memora.
    Avantajul fata de ce-a de-a 2 varianta este ca putem sa retinem un string mai lung
    decat cel initial, atata timp cat ne incadram in cei 100 de bytes.

2.  Cea de-a doua varianta, s2[] = "Ana" este mai eficienta decat prima, intrucat 
    programul v-a aloca el memoria necesara pentru a retine stringul. Problema 
    acestei solutii este ca nu putem realoca memoria, pentru a retine un string mai lung.

3.  Aceasta varinta rezolva neajunsurile celorlalte 2 solutii. In loc sa alocam spatiu din 
    prima pentru a retine un string, noi vom memora un pointer care va "arata" spre locatia
    stringului ce trebuie memorat. Putem astfel sa realocam sau sa dealocam memorie, putem 
    retine un alt string, fiind o solutie foarte flexibila si eficienta.