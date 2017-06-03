# gamZEZAR 
## Açıklama 
  Gamze bir gün annesinden para istemek için mesaj atar, fakat attığı mesaj annesine giderken şifreleme yapılır ama annesinin telefonu şifreli mesajların şifresini kıramaz ve bu sebepler gelen mesajları anlamlandıramaz. Sizin göreviniz Gamze'nin annesine mesajları okuyabilmesi için uygun programı yazmak. 
Mesajlar Sezar şifreleme algoritması ile şifrelenmiştir; 
• A -> D  
• B -> E  
• C -> F  
• ...  
• T -> W  
• ...  
• W -> Z  
• X -> A  
• Y -> B  

  Sezar şifreleme algoritmasında şekilde görüldüğü gibi harfleri kaydırarak şifreleme yapılır. 
  Daha fazla bilgi için google.com 
## Input Format 
  Inputun ilk satırında tam sayı olarak verilecek input sayısı girilir. 
  Her input 3 satırdan oluşur. İlk satırda büyük harflerle şifreli bir metin verilir. İkinci satırda aynı uzunlukta şifreli metinin şifresinin kırılmış hali verilir. Üçüncü satırda ise şifresi kırılması istenen metin verilir. 

## Output Format 
  Sizden beklenen her inputun 3. satırında verilen şifresi kırılması beklenen metnin, kırılmış halini ekrana yazdırmanızdır ve her cevaptan önce programın çalıştırılmasından itibaren kırılan kaçıncı metin olduğunu belirten Case 1:, Case 2:, Case 3: gibi belirteçler eklenmesi beklenir. Örneği inceleyerek anlayabilirsiniz.  

## Örnek Input 
  ````
  3  
  FDW  
  CAT  
  KVSF  
  EDQDQDV_KDYH_EHHQ_VWROHQ  
  BANANAS_HAVE_BEEN_STOLEN  
  ZH_KLG_WKHP_ZHOO 
   NYXUOI_UYXQ_WECD_XYD_UXYG  
  DONKEY_KONG_MUST_NOT_KNOW  
  NU_WSCCOC_LKXKXKC 
  ````

## Örnek Output 
````
Case 1: HSPC 
Case 2: WE_HID_THEM_WELL  
Case 3: DK_MISSES_BANANAS 
