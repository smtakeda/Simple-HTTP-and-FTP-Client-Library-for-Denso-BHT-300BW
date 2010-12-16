<?php
$out="あア";
header("Content-type: text/plain; charset=Shift_JIS");
$out = mb_convert_encoding(mb_convert_kana($out,"rnask","UTF-8"), "SJIS","UTF-8");
header("Content-Length: ".strlen($out));
echo $out;
?>