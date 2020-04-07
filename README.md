# SUDOKU  
## TASK
Write a program for a possible solution to the Sudoku game.  
Handle all sorts of errors.  
Arguments are passed via the command line.  
For example:  
```
sudoku.exe line1 line2 line3 line4 line5 line6 line7 line8 line9
```  
## Errors  
1. Error in submitting arguments in the command line.  
![](https://s198vla.storage.yandex.net/rdisk/728fc627574579a09b784460e4ec657c82fd45ead91a1bcd43eac66ab6413852/5e8c558f/6GEfPPB5TxaxBhFkj-GPLoz4PzZEX83pMEv11HIIqTGLeuCTGJQfgK8nt9b6glqOXciRCLeaJXKqBTlua6o9YQ==?uid=316309876&filename=4.png&disposition=inline&hash=&limit=0&content_type=image%2Fpng&tknv=v2&owner_uid=316309876&hid=6a112b9f0c7bf3201dec5f3af0796170&media_type=image&etag=f60917388c779aabe560cc85b54f7862&fsize=1795&rtoken=NDTnDo0FthsV&force_default=yes&ycrid=na-b5b96a379f94ca5fb71903e7f3ce1a0c-downloader7f&ts=5a2b0d48541c0&s=c3bf2c938641548c4065c72de13d52217a31a478474156b771c87a24e8117d65&pb=U2FsdGVkX1-RuPFHnQo0GhtzveU7YvRlaY2tTWk-wmpbsW41wQgTEpQjpPmFlWxcPqd9dOP4DbbI2MjEfWMouhVoMZ3bQdJl5Jj_harrbFg)  
2. Error of duplicated numbers horizontally.  
![](https://s161myt.storage.yandex.net/rdisk/d77c98ca67599b042500dc4d1cde1358132a5ca66ea86ed4b50a10a86c4d0bd4/5e8c55eb/6GEfPPB5TxaxBhFkj-GPLsm8g4hTWrlxhvYoNdz3WxNES9McW0IV8e-7bKh-Y-Cgv6RswbZAtsJgX4kJE-ymTQ==?uid=316309876&filename=6.png&disposition=inline&hash=&limit=0&content_type=image%2Fpng&tknv=v2&owner_uid=316309876&fsize=1684&hid=1a9160a67b75188b13aedfdecaa4e953&etag=5b2858c3bdc5d05d7bdd3c654eb35bf3&media_type=image&rtoken=EbMNVwGA8lTh&force_default=yes&ycrid=na-909799cb9f37df8822848ba56e003751-downloader3f&ts=5a2b0d9f1ce80&s=0e0e4bf05108eaec1ccdf881577ecac4662d543769586a668f7b4c682841d0e0&pb=U2FsdGVkX1-7bzaf4wz16HQW-3We5xLB62WUb1OFWnJV8RBxOoIIBvhakQmgN7VQQgR4aUPmdBXX67E1K8g_gpGbi0mi39QZmlORiHHEjdo)  
3. Error of duplicated numbers vertically.  
![](https://s255iva.storage.yandex.net/rdisk/eb0cec8598e3ecf2303a340df84d0eddf42df107ca807099b7348024d357097a/5e8c562e/6GEfPPB5TxaxBhFkj-GPLto71BIo63C4NbA7NmcaVtlbIfZUJ37dk7xefBkhr9ij2xHaI5qwZAoRt1mTJVoe7w==?uid=316309876&filename=7.png&disposition=inline&hash=&limit=0&content_type=image%2Fpng&tknv=v2&owner_uid=316309876&fsize=1728&etag=aa09922ea91eeabf6fcb7716a0473f78&media_type=image&hid=72697af2ca670eb41919bc2f92fe222b&rtoken=p0YNOlG1eRFx&force_default=yes&ycrid=na-e0afa2282a65cb99334f143acbbb1322-downloader20f&ts=5a2b0ddff6780&s=9c4bd8cd5414fbbb457359abad759425bc1f5e35188f37d3c44e6a29ffd77966&pb=U2FsdGVkX18NLdluUxfMZkBLKuBOGjbFNz3KoCkizgfqAN_e70H1NSQ5jrTFdrmLnyaw7WFnfJfSaGFtwuJyyOO-J_P0ko2TIWhHW84sQlc)
## Example:  
**Unfortunately my solution algorithm only works for light levels.**
![](https://s71myt.storage.yandex.net/rdisk/e8c462690275fd2bf7019d54314a40b07d8000dbd868c75fbae4fa5871f518bb/5e8c52d6/6GEfPPB5TxaxBhFkj-GPLlU9zFpr_-sOFEOyeeoh5CuaCBJbYrT_B0vGe9taZJOZvsMNlIj-rdejCZsymaYM0A==?uid=316309876&filename=3.png&disposition=inline&hash=&limit=0&content_type=image%2Fpng&tknv=v2&owner_uid=316309876&fsize=12276&hid=e05b614576a7e89ef7a47044a2f8a65c&etag=5f4bb62e903debe61d999a51f6afd3d4&media_type=image&rtoken=vYSH6oEWaE8S&force_default=yes&ycrid=na-2f07f5987886db070887eabe2cca1aba-downloader18f&ts=5a2b0aaea9f40&s=d6b1760547768cf510d21ad9f09e679e0bed75cb209dfc12d9a8381695843ede&pb=U2FsdGVkX1-YEzQCwl-qggTTnAEE722OsqmEHAO-eMT_iK-Ij4FQbi7DNrWkMgeKHFqiRK7xqod1PE4v7eViDjW4F-IB-NJvCjYEIi-vlrs)  
## Other  
**The Makefile is made for the Windows operating system.**
```
make sudoku (the command creates a program)
make clean (the command deletes the program)
make re (the command deletes the old program and creates a new)
```  
  
Author - _Mark Veligod_  
School 21 - _ckakuna_
