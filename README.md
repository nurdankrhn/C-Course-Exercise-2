# C-Course-Exercise-2

/*****exercise2.1*****/

:pushpin:Pascal üçgenini bastıran aşağıdaki fonksiyonu yazınız:

void disp_pascal_triangle(int n);

Fonksiyonun parametresi Pascal üçgeninin yüksekliğini vermektedir. Örneğin n değeri 5 ise:

![image](https://user-images.githubusercontent.com/88037846/229775957-6c167781-3097-4fe6-ad0b-362e985b1809.png)

Pascal üçgenindeki elemanların n elemanlı kümenin k'li alt küme sayıları olduğunu anımsayınız. Satırlar kümenin eleman sayılarını, satırlardaki elemanlar da o kümenin alt küme sayılarını (0'dan başlayarak) vermektedir. C(n, k) kombinasyonu n! / (k ! * (n – k)!) biçimindedir.  Python'a 3.8 ile birlikte n elemanlı bir kümenin k'lı kombinasyonlarının sayısını veren comb isimli bir fonksiyon da eklenmiştir. 

/*****exercise2.2*****/

:pushpin:int bir değeri parametre olarak alan ve aşağıdaki kalıbı ekrana basan disp_shape isimli fonksiyonu yazınız. Fonksiyonun parametrik yapısı şöyledir:

void disp_shape(int n);

Fonksiyon şeklin yüksekliğini parametre olarak almaktadır. Aşağıdaki şekilde disp_shape fonksiyony argüman olarak 5 değeri ile çağrılmıştır. 

![image](https://user-images.githubusercontent.com/88037846/229776301-178183b2-11c1-4c41-83c8-f6afdfa9f224.png)

/*****exercise2.3*****/

:pushpin:int bir değeri parametre olarak alıp aşağıdaki kalıbı ekrana basan print_shape isimli fonksiyonu yazınız. Fonksiyonun parametrik yapısı şöyledir:

void print_shape(int n);

![image](https://user-images.githubusercontent.com/88037846/229776796-ee74e67c-445a-4c22-b2d3-d8cb7046f6a0.png)

Burada fonksiyonun parametresi 5'tir. İlk satırda bu sayının iki katı kadar * olduğuna dikkat ediniz.

/*****exercise2.4*****/

:pushpin:Parametresi ile aldığı sayının basamakları toplamına geri dönen sumdigit isimli fonksiyonu yazınız. Fonksiyonun parametrik yapısı şöyledir:

int sumdigit(unsigned long long val);

/*****exercise2.5*****/

:pushpin:İki unsigned int sayının okek ve obeb değerine geri dönen aşağıdaki fonksiyonları yazınız:

unsigned gcd(unsigned a, unsigned b);
unsigned lcm(unsigned a, unsigned b);

/*****exercise2.6*****/

:pushpin:Şimdiye kadar görülen konular kullanılarak parametresiyle aldığı int sayının tersine geri dönen intrev isimli fonksiyonu yazınız. Fonksiyonun parametrik yapısı şöyledir:

int intrev(int val);

Aşağıda fonksiyonun aldığı parametreler ve döndürdüğü değerlere örnekler verilmiştir:

123  --> 321
-123 --> -321
120 --> 21
12345 --> 54321







