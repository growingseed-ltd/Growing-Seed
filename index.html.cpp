<!DOCTYPE html>
<html lang="en">
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>GROWING SEE FINANCE AND INVESTMENT LTD - Send Money</title>
<style>
  *{box-sizing:border-box;font-family:Arial, sans-serif}
  body{margin:0;background:#eef2f0;padding:14px}
  .card{max-width:560px;margin:0 auto;background:#fff;border-radius:18px;overflow:hidden;box-shadow:0 6px 25px rgba(0,0,0,.12)}
  .header{background:linear-gradient(135deg,#0a7a42,#0e9a55);color:#fff;padding:24px 20px;text-align:center}
  .logo{width:78px;height:78px;background:#ffd700;color:#0a7a42;border-radius:50%;display:flex;align-items:center;justify-content:center;font-size:30px;font-weight:900;margin:0 auto 10px;border:4px solid #fff}
  .header h1{margin:0;font-size:23px;line-height:1.2}
  .header p{margin:8px 0 0;opacity:.95;font-size:13px}
  .badge{display:inline-block;background:#ffd700;color:#000;font-weight:bold;padding:6px 14px;border-radius:20px;font-size:12px;margin-top:12px}
  .topbar{background:#fff8dc;padding:10px;text-align:center;font-size:13px;font-weight:bold;color:#333;border-bottom:1px solid #eee}
  .form{padding:20px}
  h3{color:#0a7a42;margin:24px 0 10px;border-bottom:2px solid #e8f5ee;padding-bottom:6px;font-size:16px}
  h3:first-child{margin-top:0}
  label{display:block;font-weight:bold;font-size:13px;margin:12px 0 5px;color:#333}
  input,select,textarea{width:100%;padding:12px;border:1px solid #ddd;border-radius:10px;font-size:15px;outline:none;background:#fff}
  input:focus,select:focus{border-color:#0a7a42}
  .row{display:flex;gap:10px}
  .row .small{width:115px;flex-shrink:0}
  .row .big{flex:1}
  .platforms{display:grid;grid-template-columns:1fr 1fr;gap:10px;margin-top:8px}
  .platforms label{border:1px solid #ddd;border-radius:10px;padding:13px;text-align:center;cursor:pointer;font-weight:normal;margin:0;font-size:14px}
  .platforms input{display:none}
  .platforms label:has(input:checked){border-color:#0a7a42;background:#e8f5ee;font-weight:bold;color:#0a7a42}
  .fee-box{background:#f0f9f3;border:1px dashed #0a7a42;border-radius:12px;padding:14px;margin-top:16px;font-size:14px;line-height:1.8}
  .fee-box b{float:right}
  .btn{width:100%;background:#25D366;color:#fff;border:none;padding:16px;border-radius:12px;font-size:17px;font-weight:bold;cursor:pointer;margin-top:18px}
  .btn:hover{background:#1fb857}
  .btn2{width:100%;background:#0a7a42;color:#fff;border:none;padding:13px;border-radius:12px;font-size:15px;font-weight:bold;cursor:pointer;margin-top:10px}
  .note{text-align:center;font-size:12px;color:#777;margin-top:12px;line-height:1.5}
  .footer{background:#0a2e1c;color:#fff;padding:16px;text-align:center;font-size:13px;line-height:1.7}
  .footer a{color:#ffd700;text-decoration:none;font-weight:bold}
  .ref{background:#fff8dc;padding:10px;border-radius:10px;text-align:center;font-weight:bold;color:#0a7a42;margin-bottom:5px}
</style>
</head>
<body>
<div class="card">
  <div class="header">
    <div class="logo">GS</div>
    <h1>GROWING SEE FINANCE<br>AND INVESTMENT LTD</h1>
    <p>Western Union • MoneyGram • Mobile Money • LEC Token</p>
    <div class="badge">ONLY 1.5% FEE • FAST • SECURE • BUSHROD ISLAND</div>
  </div>
  <div class="topbar">📍 Logan Town Cinema, Bushrod Island, Monrovia &nbsp;|&nbsp; 📞 +231 776357916</div>

  <form class="form" onsubmit="sendToWhatsApp(event)">
    <div class="ref" id="refDisplay">Reference: Loading...</div>

    <h3>1. Sender Details</h3>
    <label>Full Name *</label>
    <input id="senderName" required placeholder="e.g. John Doe">
    <label>Your Address *</label>
    <input id="senderAddress" required placeholder="e.g. Logan Town, Bushrod Island">
    <label>Your Contact Number *</label>
    <div class="row"><input class="small" id="senderCode" value="+231" required><input class="big" id="senderPhone" required placeholder="776357916" type="tel"></div>
    <label>ID Type *</label>
    <select id="idType"><option>National ID</option><option>Passport</option><option>Driver's License</option><option>Voter ID</option><option>Other</option></select>
    <label>ID Number *</label>
    <input id="idNumber" required placeholder="e.g. 123456789">

    <h3>2. Receiver Details</h3>
    <label>Receiver Full Name *</label>
    <input id="receiverName" required placeholder="e.g. Mary Smith">
    <label>Receiver Address *</label>
    <input id="receiverAddress" required placeholder="e.g. Paynesville, Monrovia">
    <label>Receiver Contact Number *</label>
    <div class="row"><input class="small" id="receiverCode" value="+231" required><input class="big" id="receiverPhone" required placeholder="770123456" type="tel"></div>
    <label>Pickup Location / City *</label>
    <select id="pickup"><option>Logan Town Cinema, Bushrod Island - Main Office</option><option>Sinkor</option><option>Paynesville</option><option>Broad Street</option><option>Red Light</option><option>Buchanan</option><option>Gbarnga</option><option>Other / Outside Liberia</option></select>

    <h3>3. Transfer Details</h3>
    <label>Amount To Send *</label>
    <input id="amount" required placeholder="e.g. 5000" type="number" min="1" oninput="calcFee()">
    <select id="currency" onchange="calcFee()" style="margin-top:8px"><option value="LRD">Liberian Dollar (LRD)</option><option value="USD">US Dollar (USD)</option></select>

    <label>Which Platform? *</label>
    <div class="platforms">
      <label><input type="radio" name="platform" value="Western Union" checked><span>Western Union</span></label>
      <label><input type="radio" name="platform" value="MoneyGram"><span>MoneyGram</span></label>
      <label><input type="radio" name="platform" value="Mobile Money"><span>Mobile Money</span></label>
      <label><input type="radio" name="platform" value="LEC Token"><span>LEC Token</span></label>
      <label><input type="radio" name="platform" value="Orange Money"><span>Orange Money</span></label>
      <label><input type="radio" name="platform" value="Other"><span>Other</span></label>
    </div>

    <label>Mobile Money / Orange Money Number (If applicable)</label>
    <input id="momoNumber" placeholder="e.g. 0776357916">
    <label>Purpose of Transfer</label>
    <select id="purpose"><option>Family Support</option><option>Business Payment</option><option>School Fees</option><option>Medical</option><option>LEC Token Purchase</option><option>Other</option></select>
    <label>Extra Note (Optional)</label>
    <textarea id="note" rows="2" placeholder="Any special instruction..."></textarea>

    <div class="fee-box">
      <div>Amount: <b id="showAmount">0</b></div>
      <div>Service Fee (1.5% - All Platforms): <b id="showFee">0</b></div>
      <div style="border-top:1px solid #ccc;margin-top:6px;padding-top:6px;font-size:16px">Total To Pay: <b id="showTotal" style="color:#0a7a42">0</b></div>
      <div style="font-size:11px;color:#666;float:none">Flat 1.5% fee for Western Union, MoneyGram, Mobile Money, LEC Token. Visit us at Logan Town Cinema, Bushrod Island to pay and collect.</div>
    </div>

    <button type="submit" class="btn">Send Request on WhatsApp →</button>
    <button type="button" class="btn2" onclick="window.open('https://wa.me/231776357916?text=Hello%20Growing%20See%20Finance,%20I%20have%20a%20question','_blank')">Chat With Us Directly</button>
    <p class="note">Clicking send will open WhatsApp with all your details ready.<br>Our team at Logan Town Cinema will reply to confirm.</p>
  </form>

  <div class="footer">
    <b>GROWING SEE FINANCE AND INVESTMENT LTD</b><br>
    📍 Logan Town Cinema, Bushrod Island, Monrovia, Liberia<br>
    📞 WhatsApp: <a href="https://wa.me/231776357916">+231 776357916</a><br>
    🕒 Open: Mon - Sat, 8am - 6pm &nbsp;|&nbsp; Fee: 1.5% Flat
  </div>
</div>

<script>
let ref = "GS-" + new Date().getFullYear() + "-" + Math.floor(1000 + Math.random()*9000);
document.getElementById('refDisplay').innerText = "Reference: " + ref;
function calcFee(){
  let amt = parseFloat(document.getElementById('amount').value) || 0;
  let cur = document.getElementById('currency').value;
  let fee = amt * 0.015;
  let total = amt + fee;
  document.getElementById('showAmount').innerText = amt.toLocaleString() + " " + cur;
  document.getElementById('showFee').innerText = fee.toLocaleString() + " " + cur;
  document.getElementById('showTotal').innerText = total.toLocaleString() + " " + cur;
}
function sendToWhatsApp(e){
  e.preventDefault();
  const get = id => document.getElementById(id).value.trim();
  const platform = document.querySelector('input[name="platform"]:checked').value;
  let amt = parseFloat(get('amount')) || 0;
  let fee = amt * 0.015;
  let total = amt + fee;
  let msg = `*NEW TRANSFER - GROWING SEE FINANCE*%0ARef: ${ref}%0AOffice: Logan Town Cinema, Bushrod Island%0A%0A*SENDER*%0AName: ${get('senderName')}%0AAddress: ${get('senderAddress')}%0AContact: ${get('senderCode')} ${get('senderPhone')}%0AID: ${get('idType')} - ${get('idNumber')}%0A%0A*RECEIVER*%0AName: ${get('receiverName')}%0AAddress: ${get('receiverAddress')}%0AContact: ${get('receiverCode')} ${get('receiverPhone')}%0APickup: ${get('pickup')}%0A%0A*TRANSFER*%0AAmount: ${amt} ${get('currency')}%0AFee (1.5%): ${fee} ${get('currency')}%0ATotal To Pay: ${total} ${get('currency')}%0APlatform: ${platform}%0APurpose: ${get('purpose')}%0A`;
  if(get('momoNumber')) msg += `MoMo Number: ${get('momoNumber')}%0A`;
  if(get('note')) msg += `Note: ${get('note')}%0A`;
  window.open(`https://wa.me/231776357916?text=${msg}`, "_blank");
}
</script>
</body>
</html>