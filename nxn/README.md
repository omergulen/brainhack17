# NxN 
## Açıklama 
  Ekin hocasından sınavda çıkacak soruları almıştır ama soruları çözemediği için sınıfta kalacaktır. Tüm arkadaşlarına sormuştur ama çözümü bulamamıştır. Soruların zor kısmını çözebilmekte ama kolay kısmını yapamamaktadır. Soruların kolay kısmında NxN matrisin çapraz farkını alınması gerekmektedir. Yani determinant gibi çaprazları seçmeli ama çarpmak yerine toplayıp sonuçların birbirinden çıkarılması ve mutlak değerinin alınması gerekmektedir. Sizin göreviniz Ekin'in soruyu çözmesine yardım etmek için kolay kısmı çözen bir program tasarlamak. 
 
## Input Format 
  İlk satırda NxN matrisi belirleyecek olan N verilir. Diğer N satırda da N tane matrisin içeriği boşluklarla verilir. 

## Output Format 
  Sonucun yazdırılıması yeterli olacaktır. 

## Örnek Input 
````
  3 
  11 2 4 
  4 5 6 
  10 8 –12 
  ````

## Örnek Output 
  15 

## Örnek Açıklaması 
  ````
  
  11 
      5 
        -12 
  Toplanır 11 + 5 – 12 = 4 
 
        4
      5 
  10
  
  Toplanır 4 + 5 + 10 = 19 
  |4-19| = 15 yazdırılır. ````
