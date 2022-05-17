const char* index_br = "\
<!DOCTYPE html>\
<html>\
  <head>\
    <title>Configuração</title>\
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
        /*border-radius:5px; */\
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
        <h1>Configuração</h1>\
      </div>\
    </center>\
\
    <div class=\"block\">\
      <p style=\"color:#35e6a0;\">Quando em modo Servidor:MQTT não suportado, WebSockets na porta 81, TCP puro(Telnet) na porta 23</p>\
      <p style=\"color:#35e6a3;\">Envie somente os dados que deseja alterar, mas preencha todos os campos de cada seção desejada.</p>\
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
          <input type=\"submit\" value=\"Enviar\">\
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
          <input type=\"submit\" value=\"Enviar\">\
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
          <input type=\"text\" name=\"baud\" value=\"230400\">\
          <br>\
      </div>\
      <div class=\"inline-block spacer-horizontal\">\
        <p></p>\
      </div>\
      <div class=\"inline-block\">\
        <h4>File dump e<br/> debug?</h4>\
\
          <input type=\"radio\" name=debug value=\"full\">Ambos<br>\
          <br>\
          <input type=\"radio\" name=debug value=\"debug\">Debug<br>\
          <br>\
          <input type=\"radio\" name=debug value=\"false\">Não<br>\
          <br>\
      </div>\
        <center>\
          <br />\
          <input type=\"submit\" value=\"Enviar\">\
        </center>\
      </form>\
    </div>\
    <div class=\"inline-block spacer-horizontal\">\
      <p></p>\
    </div>\
    <div class=\"inline-block-bordered\" style=\"\">\
\
      <form action=\"protocol\" method=\"get\">\
\
        <div class=\"inline-block\">\
          <h3>Protocolo\
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
          <h3>Modo</h3>\
          <br>\
          <br>\
          <input type=\"radio\" name=mode value=\"client\">Cliente<br>\
          <br>\
          <input type=\"radio\" name=mode value=\"server\">Servidor<br>\
          <br>\
        </div>\
\
        <div class=\"inline-block spacer-horizontal\">\
          <p></p>\
        </div>\
\
        <div class=\"inline-block\">\
          <h3>Servidor remoto</h3>\
          <br>\
          Porta\
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
          <input type=\"submit\" value=\"Enviar\">\
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
      <h3>Nomes</h3>\
      <form action=\"names\" method=\"get\">\
\
        Nome\
        <br>\
        <input type=\"text\" name=\"name\" value=\"thing\">\
        <br>\
        Tópico para publicar\
        <br>\
        <input type=\"text\" name=\"pubTopic\" value=\"things\">\
        <br>\
        Tópico para se inscrever\
        <br>\
        <input type=\"text\" name=\"subTopic\" value=\"things\">\
        <br>\
        <center>\
          <input type=\"submit\" value=\"Enviar\">\
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
      <div class=\"inline-block spacer-horizontal\">\
        <p></p>\
      </div>\
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
