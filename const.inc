'-----------------------------------------------
' 定数宣言
'-----------------------------------------------
'◆ 定数定義■ Boolean定数(フラグ用) No	定数名	値	内容	備考
	const Lc.True = 1		'真	
	const Lc.False = 0		'偽	

'■ 表示モード定数No	定数名	値	内容	備考
	const Lc.SCR.ANK = 0		'ANKモード
	const Lc.SCR.KANJI = 1		'漢字モード
	const Lc.SCR.SMKANJI = 2	'縮小漢字モード(使用不可)

'■ 倍角属性定数No	定数名	値	内容	備考
	const Lc.WAT.NORMAL = 0	'標準サイズ
	const Lc.WAT.WIDTH = 1		'横倍角
	const Lc.WAT.HEIGHT = 2	'縦倍角	※将来拡張用
	const Lc.WAT.DOUBLE = 3	'四倍角	※将来拡張用

'■ 反転属性定数No	定数名	値	内容	備考
	Global Lc.RAT.NORMAL : Lc.RAT.NORMAL = 0		'通常
	Global Lc.RAT.REVERSE : Lc.RAT.REVERSE = 1		'反転

'■ 表示フォント定数No	定数名	値	内容	備考
	Global Lc.DFT.NORMAL : Lc.DFT.NORMAL = 0	'標準フォント
	Global Lc.DFT.SMALL : Lc.DFT.SMALL = 1	'小フォント

'■ 文字色・背景色定数No	定義名	値	内容	備考
	Global Lc.COL.WHITE : Lc.COL.WHITE = &hFFFFFF00		'白	
	Global Lc.COL.RED : Lc.COL.RED = &hFF000000			'赤	
	Global Lc.COL.GREEN : Lc.COL.GREEN = &h00FF0000		'緑	
	Global Lc.COL.BLUE : Lc.COL.BLUE = &h0000FF00		'青	
	Global Lc.COL.BLACK : Lc.COL.BLACK = &h00000000		'黒	
	Global Lc.COL.CYAN : Lc.COL.CYAN = &h00FFFF00		'シアン	
	Global Lc.COL.MAGENTA : Lc.COL.MAGENTA = &hFF00FF00	'マゼンダ	
	Global Lc.COL.YELLOW : Lc.COL.YELLOW = &hFFFF0000	'黄	

'■ 折り返し有無フラグ定数No	定数名	値	内容	備考
	Global Lc.ALF.NO : Lc.ALF.NO = 0		'折り返し無し
	Global Lc.ALF.YES : Lc.ALF.YES = 1	'折り返し有り

'■ 入力モード定数No	定数名	値	内容	備考
	Global Lc.CMD.NUMERIC : Lc.CMD.NUMERIC = 0			'数字
	Global Lc.CMD.ALPHABET : Lc.CMD.ALPHABET = 1			'英字
	Global Lc.CMD.ALPHANUMERIC : Lc.CMD.ALPHANUMERIC = 2	'英数字

'■ デフォルト値表示後のカーソル位置定数No	定数名	値	内容	備考
	Global Lc.DCP.ADDWRITE : Lc.DCP.ADDWRITE = 0		'追加書込み
	Global Lc.DCP.OVERWRITE : Lc.DCP.OVERWRITE = 1	'上書き

'■ カーソルスイッチ定数No	定数名	値	内容	備考
	Global Lc.CUR.NODISP : Lc.CUR.NODISP = 0			'表示無し	※将来拡張用
	Global Lc.CUR.UNDERLINE : Lc.CUR.UNDERLINE = 1	'アンダーライン	※将来拡張用
	Global Lc.CUR.BLOCK : Lc.CUR.BLOCK = 2			'ブロック	
	Global Lc.CUR.USER : Lc.CUR.USER = 255				'ユーザー定義ｶｰｿﾙ	※将来拡張用

'■ ブザー音量定数No	定数名	値	内容	備考
	Global Lc.BVL.NOVOL : Lc.BVL.NOVOL = 0	'なし
	Global Lc.BVL.SMALL : Lc.BVL.SMALL = 1	'小
	Global Lc.BVL.MEDIAM : Lc.BVL.MEDIAM = 2	'中
	Global Lc.BVL.LARGE : Lc.BVL.LARGE = 3	'大

'■ ビープ出力時のバイブレータ設定定数No	定数名	値	内容	備考
	Global Lc.VIB.OFF : Lc.VIB.OFF = 0	'非作動
	Global Lc.VIB.ON : Lc.VIB.ON = 1		'作動

'■ ブザー音程定数No	定数名	値	内容	備考
	Global Lc.TNI.LOW : Lc.TNI.LOW = 0		'低
	Global Lc.TNI.MEDDLE : Lc.TNI.MEDDLE = 1	'中
	Global Lc.TNI.HIGH : Lc.TNI.HIGH = 2		'高

'■ バーコード読取モード定数No	定数名	値	内容	備考
	Global Lc.BRM.M : Lc.BRM.M = 0	'ﾓﾒﾝﾀﾘｽｲｯﾁﾓｰﾄﾞ
	Global Lc.BRM.F : Lc.BRM.F = 1	'ｵｰﾄｵﾌﾓｰﾄﾞ
	Global Lc.BRM.A : Lc.BRM.A = 2	'ｵﾙﾀﾈｰﾄﾞｽｲｯﾁﾓｰﾄﾞ
	Global Lc.BRM.C : Lc.BRM.C = 3	'連続読取ﾓｰﾄﾞ

'■ LED制御定数（バーコード読取時）No	定数名	値	内容	備考
	Global Lc.LED.OFF : Lc.LED.OFF = 0		'LED点灯なし
	Global Lc.LED.GREEN : Lc.LED.GREEN = 1	'緑LED点灯
	Global Lc.LED.RED : Lc.LED.RED = 2		'赤LED点灯
	Global Lc.LED.BLUE : Lc.LED.BLUE = 3		'青LED点灯

'■ 入力デバイスからの入力待ち戻り値定数No	定数名	値	内容	備考
	Global Lc.RIN.OK : Lc.RIN.OK = 1		'成功
	Global Lc.RIN.ESC : Lc.RIN.ESC = 2	'エスケープキー入力
	Global Lc.RIN.ERR :Lc.RIN.ERR = 0		'エラー(パラメータ不正)

'■ 汎用戻り値定数No	定数名	値	内容	備考
	Global Lc.RTN.OK : Lc.RTN.OK = 0		'OK
	Global Lc.RTN.NG : Lc.RTN.NG = 1		'NG
	Global Lc.RTN.ERR : Lc.RTN.ERR = -1	'ERROR(パラメータ不正)
	Global Lc.RTN.WAR : Lc.RTN.WAR = -2	'WARNING(マスタ照合で、照合条件不正時に使用)
	Global Lc.RTN.MTT : Lc.RTN.MTT = 2	'MoveToTail(マスタ照合で、後回し時に使用)

'■　YModem改行コード指定定数No	定数名	値	内容	備考
	Global Lc.LFC.CRLF : Lc.LFC.CRLF = 0	'CRLF	
	Global Lc.LFC.LF : Lc.LFC.LF = 1		'LF	
	Global Lc.LFC.CR : Lc.LFC.CR = 2		'CR	
	Global Lc.LFC.NONE : Lc.LFC.NONE = 3	'改行なし

'■　レコード中の改行コードの扱い定数No	定数名	値	内容	備考
	Global Lc.LFD.SEPA : Lc.LFD.SEPA = 0	'データとしてみなさない	
	Global Lc.LFD.DATA : Lc.LFD.DATA = 1	'データとみなす	

'■	データ受信時スペース扱いフラグ
	Global Lc.DSP.OFF : Lc.DSP.OFF = 0		'ﾌｧｲﾙ受信時ｽﾍﾟｰｽをﾃﾞｰﾀとして扱わない
	Global Lc.DSP.ON  : Lc.DSP.ON  = 1		'ﾌｧｲﾙ受信時ｽﾍﾟｰｽをﾃﾞｰﾀとして扱う

'■	リスト選択戻り値
	Global Lc.LST.ENT : Lc.LST.ENT = 1		'Entキー押下
	Global Lc.LST.ESC : Lc.LST.ESC = 2		'エスケープキー入力
	Global Lc.LST.F5  : Lc.LST.F5 = 3		'F5キー押下
	Global Lc.LST.F6  : Lc.LST.F6 = 4		'F6キー押下
	Global Lc.LST.F7  : Lc.LST.F7 = 5		'F7キー押下
	Global Lc.LST.F8  : Lc.LST.F8 = 6		'F8キー押下
	Global Lc.LST.ERR : Lc.LST.ERR = 0		'エラー(パラメータ不正)
'---------------END---------------