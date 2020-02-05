# Artificial-Neural-Network_in-Cpp

## Tek Katmanlı Öğrenme — Perceptron

   Tek katmanlı bir işlem ünitesidir. Sadece girdi ve çıktı katmalarından oluşmaktadır. Çıktı üniteleri bütün girdi ünitelerine bağlanmaktadır ve her bağlantının bir ağırlığı vardır. En basit tek katmanlı sinir ağı modeli perceptron’dur. Temel olarak eğitilebilecek tek bir yapay sinir hücresinden oluşmaktadırlar. Perceptron kavramı ilk kez 1958 yılında Cornell Üniversitesi’nden psikolog Frank Rosenbatt tarafından ortaya atılmıştır. 
   
   Sinir ağında bulunan ağırlıklar ile girdiler çarpılıp toplanarak nöronun sayısal değeri elde edilir. 2 boyutlu bir uzayda çalışılmıştır fakat ağ girişinde 3 adet giriş bulunmaktadır. Bu 3. giriş bias değeri olmaktadır. Genel olarak çalışılan uzay fark etmeksizin bu bias değeri her ağda kullanılmaktadır. Daha sonra bu elde edilen nöron değeri aktivasyon fonksiyonuna verilir. Bir çok aktivasyon fonksiyonu vardır. Kullanım amacına göre bir çok aktivasyonu vardır. Bu uygulamada ayrık ve sürekli fonksiyonlar kullanılarak gerçekleştirilmiştir. Aktivasyon fonksiyondan çıkan değer, ağın girişine uygulanan girdilerin d değeri ile karşılaştırılır. d değeri girdinin sınıfını belirtmektedir. Eğer d değeri ile aktivasyon fonksiyonundan çıkan output değeri karşılaştırılır. Eğer bu değerler eşit ise w(ağırlıklar) değerleri güncellenmez. Eşit olmadığı durumda w değerleri güncellenmektedir. Güncelleme sırasında c isminde bir katsayı kullanılmaktadır. Bu katsayı öğrenme katsayısı olarak adlandırılmaktadır.
   
   Matematiksel işlemlerin anlaşılması açısından açıklamak gerekirse; Ayrık aktivasyon fonksiyonlu örneği göz önüne alırsak, nöronun değeri sıfırdan büyükse 1, değilse -1 şeklinde bir output değeri vermektedir. Bu kısımdan sonra girdinin d değeri ile aktivasyon fonksiyonundan çıkan output değeri karşılaştırılır. Bu değerler farklı olduğunu varsayarsak w değerleri güncellenir. Güncelleme aşağıdaki gibi yapılmaktadır.
   
   >W2 = W1 + c * (d - o) * X
   
   + W2: Güncellenen yeni ağırlık değeri.
   + W1: Önceki ağırlık değeri.
   + c: Öğrenme katsayısı.
   + d: Girdinin hangi sınıfa ait olduğunu belirtir.
   + o(output): Aktivasyon fonksiyonundan çıkan output değeridir.
   + X: Ağa giren girdinin değeri.
   
   Sürekli fonksiyon kullanıldığında farklı olarak aktivasyon fonksiyonu değişiyor ve bu aktivasyon fonksiyonundan çıkan değer -1 ile 1 arasında bulunan reel sayılardan oluşmaktadır. Aktivasyon fonksiyonu olarak sigmoid fonksiyonu kullanılmıştır. W değerlerini güncellemek için bu aktivasyon fonksiyonun kendisi ve türevine ihtiyaç durulmaktadır. Bu değerler elde edildikten sonra güncelleme işlemi yapılmaktadır. Güncelleme aşağıdaki gibidir.
   
   W2 = W1 + c * (fnet - o) * fTurevNet * X
   + fnet: Sigmoid fonksiyonundan çıkan output değeri.
   + fTurevNet: Sigmoid fonksiyonunun türevi.
   
![](https://i.hizliresim.com/jAP4YD.jpg)

> Şekil-1: Perceptron Yapısı

  Yapılan bu uygulamada tek katmanlı yapay sinir ağınının C++ dili ile kodlanması gerçekleştirilmiştir. Bu uygulama 2 boyutlu düzlemde tek katmanlı yapıda 2 adet sınıfın birbirinden ayrıştırılması yapılmaktadır. Yapılan tek katmanlı sinir ağı uygulamasında ayrık ve sürekli 2 adet aktivasyon fonksiyonu kullanılmıştır. Kullanılan iki aktivasyon fonksiyonu sayesinde aralarındaki farklar göz önüne çıkmaktadır.
  
  Aynı zamanda çok sınıflı tek katmanlı bir yapay sinir ağı da kodlanmıştır. 2 sınıflı yapıda olduğu gibi ayrık ve sürekli fonksiyonları kullanılarak kodlanması gerçekleştirilmiştir. 
