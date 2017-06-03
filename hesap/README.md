# Hesap 

## Açıklama 
  Pastahanede çalışan Elman satılan ürünlerin fiyatını hesaplamakta zorluk çekmektedir. Ürün fiyatı +  (%) bahşiş ücreti + (%) vergiyi ekleyip son fiyatı bulmakta zorlanmaktadır. Sizin göreviniz ona bu işlemlerde yardımcı olacak bir program yazmak. 

## Input Format 
  Input 3 satırdan oluşur. 
İlk satırda float ya da double türünden ürün ücreti bulur. 
İkinci satırda bahşiş yüzdesi verilir 
Üçüncü satırda ise vergi yüzdesi verilir. 

## Output Format 
  "Toplam hesap TOPLAM_FİYAT liradır." Yazdırmanız beklenmektedir. TOPLAM_FİYAT yerine sonuç değişkeni gelecektir. Hesapların sonucunu en yakın tam sayıya yuvarlamanız gerekmektedir.

## Örnek Input 
````
  12.00 
  20 
  8
  ````
 

## Örnek Output 
  Toplam hesap 15 liradir. 
  
## Örnek Açıklaması 
  Ürün ücreti 12 lira, bahşiş yüzdesi 20, vergi yüzdesi 8. 
  Hesaplama: 
  12 x 20 /100 =  = 2.4 -> bahşiş 
  12 x 8 / 100 = 0.96 -> vergi 
  TOPLAM_HESAP = Ürün ücreti + bahşiş + vergi = 12 + 2.4 + 0.96 = 15.36 
  TOPLAM_HESAP' ı en yakın tamsayıya yuvarla -> 15 
