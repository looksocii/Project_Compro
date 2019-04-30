# Coin Counting Machine
<img src="https://wallpapercave.com/wp/wp2015143.jpg" width="600px">

# About The Project
<h4>ชื่อโครงงาน (Project Title) : Coin Counting Machine<br>ชนิดของโครงงาน (Project Type) : Micro-controller</h4>

<p>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Project นี้เป็นการนำ Micro-controller มาใช้ในการควบคุมเซ็นเซอร์นับเหรียญเพื่อสร้างเครื่องนับเหรียญแสดงผลผ่านจอ LCD โดยมีหลักการ คือ การประยุกต์ใช้วงจร Arduino เข้ามาทำงานร่วมกับเครื่องนับเหรียญให้เข้ากับระบบไมโครคอนโทรลเลอร์และจอ LCD การทำงานของเครื่องนับเหรียญ แสดงผลผ่านจอLCDนี้ เหรียญแต่ละชนิดจะวิ่งผ่านเซ็นเซอร์ต่างกัน จะควบคุมเซ็นเซอร์โดยการเขียนโปรแกรมลงบนระบบไมโครคอนโทรลเลอร์ในส่วนของ Project นี้ มาใช้งานและใช้ภาษาซีในการเขียนโปรแกรม และอาจจะเป็นอีกทางเลือกหนึ่งที่ช่วยให้การนับเหรียญให้มีความสะดวกมากขึ้น และสามารถลดความผิดพลาดจากการนับเหรียญด้วยมือได้</p>

<h4>ที่มาและความเป็นมาของโครงงาน</h4>
<p>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;เนื่องจากในปัจจุบันนิยมความสะดวกสบายมากยิ่งขึ้น การนับเหรียญด้วยมือกลายเป็นสิ่งที่ลำบาก เพราะ อาจมีความเคลื่อน และยุ่งยากในการแยกเหรียญว่าแต่ละเหรียญมีเท่าไหร่ และลดปัญหาเรื่องการเก็บออมแต่จำไม่ได้ว่ามีเงินอยู่ในนั้นเท่าไหร่<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;ดังนั้นทางคณะผู้จัดทำได้ประดิษฐ์อุปกรณ์ตัวหนึ่งชื่อว่า “เครื่องนับเหรียญ” ซึ่งสามารถรู้ได้เลยว่าเหรียญ 1,5,10 บาท มีจำนวนกี่เหรียญและผลรวมทั้งหมดเท่ากับกี่บาท และสามารถกดปุ่ม reset เพื่อเป็นการเริ่มต้นใหม่ได้</p>

<h4>คุณสมบัติการทํางานของโครงงาน</h4>
<ul>
    <li>สามารถนับยอดเงินทีหยอดได้</li>
    <li>สามารถนับจํานวนเหรียญที่หยอดได้</li>
    <li>ใช้ได้กับเหรียญ 1 บาท เหรียญ 5 บาท และเหรียญ 10 บาท</li> 
    <li>แสดงยอดเงินรวมและจํานวนเหรียญแต่ละชนิดผ่านจอ LCD</li>
</ul>

<h4>อุปกรณ์ Arduino</h4>
<ol>
    <li>Arduino UNO R3 พร้อมสาย USB	&nbsp;&nbsp;1 &nbsp;&nbsp;ตัว<br><img src="https://i.lnwfile.com/_/i/_raw/1b/ap/zk.jpg" width="250"></li>
    <li>สายจั้ม ผู้-เมีย Jump Wire (Male to Female) &nbsp;&nbsp;20 &nbsp;&nbsp;เส้น<br><img src="https://i.lnwfile.com/_/i/_raw/vq/qn/vs.jpg" width="250"></li>
    <li>20x Character 2004 LCD Module Black light Blue 5V for Arduino &nbsp;&nbsp;1 &nbsp;&nbsp;ตัว<br><img src="https://i.lnwfile.com/_/i/_raw/yc/eu/d1.jpg" width="250"></li>
    <li>FC-33 Electric Motor Speed Sensor count motor เซนเซอร์ก้ามปู &nbsp;&nbsp;3 &nbsp;&nbsp;ตัว<br><img src="https://i.lnwfile.com/_/i/_raw/by/yt/70.jpg" width="250"></li>
</ol>

<h4>อุปกรณ์อื่นๆ</h4>
<ol>
    <li>กล่องลัง</li>
    <li>กาวร้อน</li>
    <li>กาวสองหน้า</li>
</ol>

<h4>หลักการทํางานของโครงงาน</h4> 
<p>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;เป็นการนําเซนเซอร์ก้ามปูมาใช้ในการนับเหรียญ และนับจํานวนเงิน โดยเซนเซอร์ก้ามปูทั้งหมด3 ตัวใช้ไฟเลี้ยง5 Vจํานวนเงินและจํานวนเหรียญที่นับได้จะ แสดงผลบนจอ LCD โดยเซนเซอร์ตัวที่ 1 หน้าที่ตรวจ ว่าเป็นเหรียญ 1 บาท หรือไม่ ถ้าเป็นก็นับจํานวนเงินเพิ่ม 1 บาท และนับจํานวนเหรียญ 1 บาท เพิ่มขึ้น 1 เหรียญ ส่วนเซนเซอร์ตัวที่ 2 ทําหน้าที่ ตรวจว่าเป็นเหรียญ 5 บาท หรือไม่ ถ้าเป็นก็นับจํานวนเงินเพิ่ม 5 บาท และนับจํานวน เหรียญ 5 บาท เพิ่มขึ้น 1 เหรียญ ส่วนเซนเซอร์ตัวที่ 3 ทำหน้าที่ตรวจว่าเป็นเหรียญ 10 บาท หรือไม่ ถ้าเป็นก็นับจํานวนเงินเพิ่ม 10 บาท และนับ จํานวนเหรียญ 10 บาท เพิ่มขึ้น 1 เหรียญ ส่วนสวิทซ์ Reset ทําหน้าที่ Reset ค่าเมื่อเรานําเหรียญออกจากกระปุก แล้วเราก็จะกดสวิทซ์เพื่อทําการ Reset ค่า ให้เริ่มนับใหม่เพื่อใช้ในครั้งต่อไปได้</p>

<h4>ประโยชน์ที่จะได้รับ</h4>
<ol>
	<li>เป็นอุปกรณ์ในการนับจำนวนเหรียญ</li>
	<li>สามารถคำนวณผลรวมเหรียญได้รวดเร็ว</li>
	<li>เพื่ออำนวยความสะดวก และลดเวลาในการนับเหรียญด้วยมือซึ่งผลลัพธ์อาจจะไม่ถูกต้อง</li>
</ol>

<h4>การออกแบบ</h4>
<p>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;ใช้ลังทำเป็นทรงสี่เหลี่ยมโดยด้านขวาสุด จะเป็นช่องใส่เหรียญ หากหยอดเหรียญ 1 บาทจะเข้าช่องแรกและผ่านเซนเซอร์นับเหรียญ ต่อมา ช่องที่ 2 จะเป็นเหรียญ 5 และช่องสุดท้ายเป็นเหรียญ 10 โดย ทุกๆจะถูกเก็บช่วงล่างของกล่อง</p>

<center><table>
 <tr>
  <th><img src="Photos/1.jpg" height="300"></th>
  <th><img src="Photos/2.jpg" height="300"></th>
  <th><img src="Photos/3.jpg" height="300"></th>
  <th><img src="Photos/4.jpg" height="300"></th>
 </tr>
 </table></center>
 
# Team
<ol>
    <li>) 61070092 | นาย ธีรวัฒน์ ดอนเส</li>
    <li>) 61070139 | นาย พันธกานต์ แก้วสังหาร</li>
    <li>) 61070220 | นาย ศิรวิทย์ โบศรี</li>
    <li>) 61070260 | นาย อมฤต นันทภักดิ์</li>
</ol>
