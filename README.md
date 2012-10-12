LockQuote
=========
Энэ програм нь түгжээтэй дэлгэц дээр санамсаргүйгээр зүйр цэцэн үгс, 
алдартай хүмүүсийн хэлсэн үгсээс харуулдаг програм юм.

git clone https://github.com/fooatbar/LockQuote.git

гэж татаж аваад

cd LockQuote
make

гэж алдаа байгаа эсэхийг шалгаад дараа нь

make package

гэж багцаа үүсгээд iPhone руугаа 

scp LockQuote_1.0-1_iphoneos-arm.deb root@192.168.1.69:.

гэх маягаар scp ашиглан хуулаарай. IP хаяг болон програмынхаа үүссэн хувилбараа өөртөө тааруулан өөрчлөхөө мартав.
Дараа нь iPhone руугаа ssh-ээр ороод

dpkg -i LockQuote_1.0-1_iphoneos-arm.deb && killall SpringBoard

гэж хуулсан хувилбартаа тааруулан багцын нэрээ өөрчилж ажиллуулаарай.

Амжилт хүсье!

LockQuote