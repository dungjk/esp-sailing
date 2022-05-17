const char* index_en = "\
<!DOCTYPE html>\
<!--\
Comments here\
-->\
<html>\
  <head>\
    <title>Setup</title>\
    <meta charset=\"UTF-8\">\
    <meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">\
\
    <style>\
      body {\
        font-family: sans-serif;\
        margin: 0;\
        padding: 0;\
      }\
      p {\
        text-indent: 1rem;\
      }\
      .right {\
        float: right;\
        border: 3px solid #73AD21;\
      }\
\
      .right-absolute {\
        position: absolute;\
        right: 0;\
        width: 300px;\
      }\
     br15{\
       line-height: 150%;\
     }\
      h1 {\
        color: #acde1f;\
      }\
      button {\
        width: 7rem;\
        height: 2rem;\
        text-decoration: none;\
        font-family: sans-serif;\
      }\
      .inline-block {\
        display: inline-block;\
      }\
      .inline-block-bordered {\
        display: inline-block;\
        border: 1px solid rgb(24, 205, 107);\
        padding: 0.5rem;\
        border-radius: 5px;\
      }\
      .block {\
        display: block;\
      }\
      .spacer-horizontal {\
        width: 2rem;\
      }\
      .spacer-vertical {\
        height: 2rem;\
      }\
      .button-blue {\
        background-color: #0f8aab;\
\
        border: none;\
        cursor: pointer;\
        color: #ffffff;\
        font-size: 0.75rem;\
\
        width: 20vw;\
        height: 5vh;\
      }\
      .button-green {\
        background-color: #44c767;\
\
        border: 10px solid #18ab29;\
        cursor: pointer;\
        color: #ffffff;\
        font-size: 0.75rem;\
        width: 7rem;\
        height: 2rem;\
      }\
      .button-green:hover {\
        background-color: #5cbf2a;\
      }\
      .button-green:active {\
        position: relative;\
        top: 1px;\
      }\
\
    </style>\
\
  </head>\
\
  <body>\
\
    <center>\
      <div>\
        <h1>Setup</h1>\
      </div>\
    </center>\
\
    <div class=\"block\">\
      <p style=\"color:#35e6a0;\">For Server mode:MQTT not supported, WebSockets using port 81, raw TCP using port 23</p>\
      <p style=\"color:#35e6a3;\">Just submit the data you want to change, but fill every field that will be needed in the desired section (green box).</p>\
      <!-- <p style=\"color:#35e6a3;\">No fim, pressione<strong>Salvar</strong>.</p> -->\
\
    </div>\
\
    <div class=\"inline-block spacer-horizontal\">\
      <p></p>\
    </div>\
    <div class=\"inline-block-bordered\">\
\
      <form action=\"ap\" method=\"post\">\
        <h3>AP</h3>\
        SSID\
        <br>\
        <input type=\"text\" name=\"ssid\" value=\"\">\
        <br>\
        Password\
        <br>\
        <input type=\"text\" name=\"key\" value=\"\">\
        <br>\
        IP\
        <br>\
        <input type=\"text\" name=\"ip\" value=\"192.168.1.1\">\
        <br>\
        <center>\
          <input type=\"submit\" value=\"Submit\">\
        </center>\
      </form>\
    </div>\
    <div class=\"inline-block spacer-horizontal\">\
      <p></p>\
    </div>\
    <div class=\"inline-block-bordered\">\
\
      <form action=\"sta\" method=\"post\">\
        <h3>Station</h3>\
        <br/>\
        SSID\
        <br>\
        <input type=\"text\" name=\"ssid\" value=\"\">\
        <br>\
        Password\
        <br>\
        <input type=\"text\" name=\"key\" value=\"\">\
        <br><br>\
        <center>\
          <input type=\"submit\" value=\"Submit\">\
        </center>\
      </form>\
    </div>\
    <div class=\"inline-block spacer-horizontal\">\
      <p></p>\
    </div>\
\
    <div class=\"inline-block spacer-horizontal\">\
      <p></p>\
    </div>\
\
    <div class=\"block\">\
      <p></p>\
    </div>\
    <div class=\"inline-block spacer-horizontal\">\
      <p></p>\
    </div>\
    <div class=\"inline-block-bordered\">\
      <form action=\"init\" method=\"get\">\
      <div class=\"inline-block\">\
        <h3>WiFi</h3>\
\
          <input type=\"radio\" name=wifiMode value=\"sta\">Station<br>\
          <br>\
          <input type=\"radio\" name=wifiMode value=\"ap\">AP<br>\
          <br>\
          Serial baud rate<br/>\
          <input type=\"text\" name=\"baud\" value=\"250000\">\
          <br>\
      </div>\
      <div class=\"inline-block spacer-horizontal\">\
        <p></p>\
      </div>\
      <div class=\"inline-block\">\
        <h4>File dump and<br/> debug?</h4>\
\
          <input type=\"radio\" name=debug value=\"full\">Both<br>\
          <br>\
          <input type=\"radio\" name=debug value=\"debug\">Debug<br>\
          <br>\
          <input type=\"radio\" name=debug value=\"false\">Nope<br>\
          <br>\
      </div>\
        <center>\
          <br />\
          <input type=\"submit\" value=\"Submit\">\
        </center>\
      </form>\
    </div>\
    <div class=\"inline-block spacer-horizontal\">\
      <p></p>\
    </div>\
    <div class=\"inline-block-bordered\" >\
\
      <form action=\"protocol\" method=\"get\">\
\
        <div class=\"inline-block\">\
          <h3>Protocol\
          </h3>\
          <br>\
          <input type=\"radio\" name=protocol value=\"mqtt\">MQTT<br>\
          <br>\
          <input type=\"radio\" name=protocol value=\"ws\">WebSocket<br>\
          <br>\
          <input type=\"radio\" name=protocol value=\"raw\">Socket TCP<br>\
          <br>\
        </div>\
        <div class=\"inline-block spacer-horizontal\">\
          <p></p>\
        </div>\
        <div class=\"inline-block\">\
          <h3>Mode</h3>\
          <br>\
          <br>\
          <input type=\"radio\" name=mode value=\"client\">Client<br>\
          <br>\
          <input type=\"radio\" name=mode value=\"server\">Server<br>\
          <br>\
        </div>\
\
        <div class=\"inline-block spacer-horizontal\">\
          <p></p>\
        </div>\
\
        <div class=\"inline-block\">\
          <h3>Remote Server</h3>\
          <br>\
\
          Port\
          <br>\
          <input type=\"text\" name=\"port\" value=\"1883\">\
          <br>\
          <br15>\
          IP\
          <br>\
          <input type=\"text\" name=\"host\" value=\"192.168.\">\
          <br>\
\
        </div>\
\
        <center>\
          <input type=\"submit\" value=\"Submit\">\
        </center>\
      </form>\
    </div>\
\
    <div class=\"inline-block spacer-horizontal\">\
      <p></p>\
    </div>\
\
    <div class=\"inline-block-bordered\">\
\
      <h3>Names</h3>\
      <form action=\"names\" method=\"get\">\
\
        Name\
        <br>\
        <input type=\"text\" name=\"name\" value=\"thing\">\
        <br>\
        Publishing topic\
        <br>\
        <input type=\"text\" name=\"pubTopic\" value=\"things\">\
        <br>\
        Subscription topic\
        <br>\
        <input type=\"text\" name=\"subTopic\" value=\"things\">\
        <br>\
        <center>\
          <input type=\"submit\" value=\"Submit\">\
        </center>\
      </form>\
    </div>\
    <div class=\"block\">\
      <p></p>\
    </div>\
    <center>\
      <br/>\
      <div class=\"inline-block spacer-horizontal\">\
        <p></p>\
      </div>\
\
    </center>\
    <br/>\
    <br/>\
    <script>\
\
      function reloadPressed() {\
        location.reload();\
      }\
\
      function savePressed() {\
        location.href = \"save\";\
      }\
\
      function openPressed() {\
        location.href = \"open\";\
      }\
\
      function stopPressed() {\
        location.href = \"stop\";\
      }\
    </script>\
\
  </body>\
</html>\
";
