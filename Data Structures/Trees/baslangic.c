/* Kök işaretçisi -> Kök dügüm (root) gösterir. Boş ağaçta kök işaretcisi NULL deger gösterir.
    Dügümler(nodes)
    Dallar(branch) (iki düğüm arasındaki ilişkiyi gösterir.)
    Veri yapilarinda ağaçlar kök en baştan aşağı olarak gider. En baştaki kök daha sonra aşağı doğru yapraklar.

    * Ağacın herbir elemanına node(dugum) denir.
    * Root(kök dügüm) agacin baslangic dugumudur.
    * Child(cocuk) bir dugume dogrudan baglı olan dugume cocuk denir.
    * Sibling(kardes dugum) aynı dugume baglı olan kardesler.
    * Parent(aile) Kardeslern baglı oldugu dugum ailedir.
    * Ancestor(ata) aile dugmun daha ustunde kalan dugume verilen ad.
    * Dedscendant(torun) bir dugumun cocuguna baglı olan dugum
    
    * Degree(Derece) bir dugumden alt hiyerayşiye yapılan baglantı sayısı. Cocuk ve ya alt agac sayisi
    * Level(düzey) iki dugum arasindaki yolun üzerinde bulunan dugumleirn sayisidir.Kok dugum duzeyi 1 dogrudan kok dugume baglı dugumlerin duzeyi 2 dir.
    * Depth(derinlik) bir dugumun köke olan uzaklıgıdir. Kok dugmun derinligi 1'dir.
    * Leaf(yaprak) agacın en altında bulunan ve cocuklari olmayan dugumlere denir.
    * Height(yukseklik) bir dugumun kendi silsilesinden en uzak yaprak dugume olan uzaklık
    * Path(yol) bir dugumun asagiya dogru (cocukları uzerinden) bir baska dugume gidebilmek icin üzerindne gecilmesi gereken dugumlerin listesidir.
    
    Ağaç Türleri

    * Binary Search Tree(İkili Arama Agaci) : Bir dugum en fazla iki cocuga sahip olabilir.Alt cocuk baglantilari belirli bir sirada yapilir.
        - Boş olabilir(Empty Tree)
        - İKili alt agac(subtree) olabilir.
        - İkili arama agacinda sol dugum kendinden kucuk sag dugum kendinden buyuk olur. İkili ağaçta böyle degil. Binary Tree ve Binary Search Tree birbirinden farklı
    * Coding Tree(Kodlama Agaci) : Kökten baslayip yaprakalra kadar olan yol üzerindeki baglanti degerleri kodu verir.
    * Dictonary Tree(Sozcuk Agaci)
    * Heap Tree(Kumele Agaci)
    
    */

   