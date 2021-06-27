# Conan

TRƯỜNG ĐẠI HỌC CÔNG NGHỆ THÔNG TIN
Đề thi Thực hành Lập trình hướng đối tượng – Lớp IT002.L21 
Khoa Công nghệ Phần mềm 
Năm học 2020 – 2021 
Thời gian làm bài: 120 phút
Ngày thi: 21/06/2021

Lưu ý chung: 
+ Sinh viên làm trên máy tính cá nhân
+ Khi nộp bài, sinh viên nén bài làm và đặt tên theo quy tắc: MSSV_Hoten.zip (.rar) và 
nộp đúng thời gian quy định (nộp ở website môn học)
+ Các trường hợp sau sẽ không được chấm bài: Đặt tên bài nộp không đúng quy định, có
bài giống hoàn toàn với sinh viên khác hoặc không làm đúng yêu cầu đề bài.

+ Thang điểm bài làm:
  • Xây dựng được class và đúng với đối tượng đề ra  (2đ) 
  • Áp dụng tính kế thừa   (2đ) 
  • Áp dụng tính đa hình   (3đ) 
  • Giải quyết được bài toán  (3đ) 

ĐỀ BÀI:
Một game 2D có nhân vật chính là Conan. Nhiệm vụ của Conan là vượt qua các màn game 
để giải cứu Ran bị tổ chức áo đen bắt giữ làm con tin. Ở mỗi màn game, Conan có thể gặp
một trong các nhân vật Gin, Vodka, Korn và một thành viên “bí ẩn”. Ở màn cuối, Conan
sẽ gặp Người mặt quạ là trùm của tổ chức áo đen.
Ban đầu, Conan có một lượng máu (HP) và sức mạnh nhất định. Nếu lượng máu bằng 0,
game sẽ kết thúc tại thời điểm đó và nhiệm vụ thất bại. 
Ngoài ra ở mỗi màn, sẽ có gặp các vụ án với độ khó ngẫu nhiên từ 0 đến 1000. Nếu điểm
sức mạnh của Conan lớn hơn hoặc bằng độ khó, Conan có thể phá được vụ án và điểm 
sức mạnh sẽ được tăng thêm một lượng bằng độ khó vụ án đó. Ngược lại nếu không vượt
qua, lượng máu (HP) của Conan sẽ bị trừ đi một nửa độ khó của vụ án. Sau khi phá hết
vụ án ở mỗi màn, Conan sẽ gặp các nhân vật ở màn đó (nếu có).

Đối với các nhân vật:

 • Gin:
Có lượng máu là 1000, sức mạnh là 500, nếu điểm sức mạnh của Conan lớn hơn hoặc
bằng sức mạnh của Gin, Conan sẽ đánh thắng Gin và nhận được 01 ngôi sao thần kỳ. Ngôi
sao này có thể giúp Conan khôi phục lại lượng máu và sức mạnh ban đầu (chỉ dùng khi
cần thiết). Ngược lại, nếu Conan thua Gin, lượng máu sẽ bị mất đúng bằng sức mạnh của 
Gin.

 • Vodka:
Có lượng máu là 1200, sức mạnh là 600. Tương tự như Gin nhưng nếu đánh thắng Vodka,
Conan sẽ nhận được lượng máu bằng sức mạnh của Vodka.

 • Korn:
Có lượng máu là 2000, sức mạnh 800. Tương tự Gin nhưng nếu thắng Korn, Conan sẽ
nhận được 01 ngôi sao tiên tri. Ngôi sao này giúp Conan có thể vượt qua vụ án bất kỳ (chỉ
sử dụng khi Conan không đủ sức mạnh để phá án).

 • Thành viên Bí ẩn:
Conan sẽ chiến thắng thành viên bí ẩn nếu đã vượt qua ít nhất 3 vụ án và được gia tăng
500 sức mạnh. Nếu thua, Conan sẽ mất tất cả các vật hỗ trợ (ngôi sao thần kỳ, ngôi sao 
tiên tri).

 • Người mặt quạ:
Có lượng máu 3000.
Sau khi vượt qua tất cả các màn, Conan sẽ đến màn cuối cùng, Conan sẽ gặp người mặt
quạ. Lúc này Conan chuyển hết tất cả lượng máu (HP) cộng dồn vào sức mạnh. Nếu lúc
này sức mạnh Conan lớn hơn hoặc bằng lượng máu của Người mặt quạ, Conan sẽ chiến 
thắng và nhiệm vụ hoàn tất. Ngược lại, nếu thua, game sẽ kết thúc, nhiệm vụ thất bại.
 

Áp dụng kiến thức lập trình hướng đối tượng, hãy viết chương trình (có sử dụng kế thừa, 
đa hình) cho phép nhập vào nội dung như sau:
Dòng 1: Lượng máu và sức mạnh ban đầu của Conan
Dòng 2: Số lượng các màn (chưa kể màn cuối) 
Dòng 3: Gồm 4 số nguyên lần lượt là vị trí xuất hiện của Gin, Vodka, Korn và Kẻ bí ẩn
trong các màn (nếu gặp số 0 thì không xuất hiện)
Các cặp dòng tiếp theo số lượng các vụ án và độ khó tương ứng.
Chương trình in ra “CHIEN THANG” nếu Conan cứu được Ran, in ra “THAT BAI” nếu
Conan không hoàn thành được nhiệm vụ.

Ví dụ chương trình có input như sau:
2000 1200
4
3 1 2 0
2 
200 800
1
1000
4
400 500 900 100 
3
200 200 0
Sẽ có output là  “CHIEN THANG”. 

Giải thích:
Ban đầu Conan có 2000 HP và 1200 sức mạnh. Có 4 màn, Gin xuất hiện ở màn 3, Vodka
xuất hiện ở màn 1, Korn xuất hiện ở màn 2 và Kẻ bí ẩn không xuất hiện.
- Ở màn 1, có 2 vụ án với độ khó là 200, 800. Lúc này Conan có sức mạnh lớn hơn
nên phá được hết và chỉ số lúc này là 2000 HP, 2200 sức mạnh. Sau đó gặp Vodka,
vì Conan có 2200 sức mạnh (lớn hơn 600) nên thắng Vodka và nhận được 600 HP.
Chỉ số lúc này là 2600 HP, 2200 sức mạnh.
- Ở màn 2, có 1 vụ án với độ khó là 1000, Conan vượt qua và chỉ số là 2600 HP, 
3200 sức mạnh. Sau đó gặp Korn. Do có 3200 sức mạnh (lớn hơn 800) nên thắng
Korn và nhận được 1 ngôi sao tiên tri. Lúc này Conan có 2600 HP, 3200 sức mạnh
và 1 ngôi sao tiên tri 
- Ở màn 3, có 4 vụ án với độ khó là 400, 500, 900, 100. Conan đủ sức mạnh vượt qua
hết và chỉ số lúc này là 2600 HP, 5100 sức mạnh, 1 ngôi sao tiên tri. Sau đó Conan
gặp Gin. Đánh thắng Gin và nhận được 1 ngôi sao thần kỳ. 
- Ở màn 4, có 3 vụ án với độ khó là 200, 200, 0. Conan vượt qua hết và nhận được
thêm 400 sức mạnh. Chỉ số lúc này là 2600 HP, 5500 sức mạnh, 1 sao tiên tri, 1 sao
thần kỳ. 
- Ở màn cuối, Conan chuyển hoá thành 8100 sức mạnh (hơn 3000) và thắng Người
mặt quạ. Nhiệm vụ hoàn tất. 


--------------------------------HẾT--------------------------------

 
