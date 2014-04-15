
var shell = new ActiveXObject("WScript.Shell");
var fso = new ActiveXObject("Scripting.FileSystemObject");

var env = shell.Environment("USER");
env.item("ORIFLAMME_SDK_ROOT") = shell.CurrentDirectory;


WScript.Echo("OriflammeSDKのセットアップが終了しました。");
