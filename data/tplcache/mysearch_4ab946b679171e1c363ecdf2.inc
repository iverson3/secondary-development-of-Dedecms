<?php
if(!isset($GLOBALS['_vars'])) $GLOBALS['_vars'] = array(); 
$fields = array();
?><!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=<?php echo $GLOBALS['cfg_soft_lang']; ?>" />
<title>最新动作片下载_好看的动作片下载_经典动作片下载 - A67手机电影</title>
<meta name="Description" content="A67手机电影提供最新动作片下载、好看的动作片下载、经典动作片下载，地域更是辐射至美国动作片、欧美动作片、香港动作片、内地动作片等。让您在手机上也一样能看高清电影。" /> 
<link href="<?php echo $GLOBALS['cfg_templets_skin']; ?>/css/style.css" type="text/css"  rel="stylesheet"/>
<link href="<?php echo $GLOBALS['cfg_templets_skin']; ?>/css/list.css" type="text/css"  rel="stylesheet"/>
</head>
<body>
<div id="header">
	<div id="menu"> 
		<div class="top">
			<div class="logn">3GP/MP4手机电影第一门户网！<a href="#" target="_blank">请登录</a><a href="#" target="_blank">注册会员</a></div>
			<div class="txt">
				<ul>
				<li><a href="http://www.a67.com/view/" target="_blank">提提建议</a></li>
				<li><a href="http://www.a67.com/maps.html" target="_blank">网站地图</a></li>
				<li><a href="javascript:;"  onclick="return addFavor('A67手机电影', 'http://www.a67.com/movie/')">加入收藏</a></li> 
				<li><a href="javascript:;"  onclick="return setHome(this, 'http://www.a67.com');">设为首页</a></li>>
				</ul>
			</div>
		</div>
	</div>
	<div class="menu">
		<div class="menu_wrap">
			<div class="logo"><a href="http://www.a67.com/" target="_blank"><img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/images/logo.gif" alt="A67手机电影" border="0" /></a></div>
			<div class="search"> 
				<div class="searcher_wrap"> 
					<div class="searcher_tet"> 
					<form action="http://so.a67.com/so" method="get" name="q" target="_blank" id="search" > 
					<input type="text" name="q" class="focus" value="" /> 
					<input type="image" name="s" class="searchbutton" id="button" src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/images/searcher.jpg" align="absmiddle" /> 
					</form> 
					</div> 
					<div class="hot_search_box"> 
						<div class="hotkeywords">
							一周热搜：
							<a href="" target="_blank">一起又看流星雨</a> 
							<a href="" target="_blank">泡沫之夏</a> 
							<a href="" target="_blank">成龙</a> 
							<a href="" target="_blank">海派甜心</a> 
							<a href="" target="_blank">周星驰</a> 
							<a href="" target="_blank">嘻游记</a> 
							<a href="" target="_blank">唐山大地震</a> 
							<a href="" target="_blank">敢死队</a> 
						</div> 
					</div> 
				</div> 
			</div>
		</div>
		<div class="banner">
			<img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/images/banner.gif" alt="新红楼梦" border="0" />
		</div>
		<div class="nav"> 
			<ul>
				<!-- 生成菜单导航条  GetOneTypeUrlA($row)函数 -->
				<li><a href="<?php echo $GLOBALS['cfg_cmsurl']; ?>" target="_self">首页</a></li>
				<?php foreach($menus as $row): ?>
				<li >
					<a href="<?php echo GetOneTypeUrlA($row);?>" title="<?php echo $row['typename']; ?>" target="_self"><?php echo $row['typename']; ?></a>
				</li> 
				<?php endforeach;?>
				<li><a href="http://www.a67.com/zuixin/" title="最新电影" target="_blank">最新</a></li>
			</ul>
			<div class="morelink">
				<a href="http://www.a67.com/3gpcoder/" title="3GP格式转换器" target="_blank">3GP转换器</a> | 
				<a href="http://www.2366.com/" target="_blank">网页游戏</a> | 
				<a href="http://db.2u.com.cn/" target="_blank">游戏下载</a>
			</div>
			<div class="ico_new"></div>
	  </div>
	</div>
</div>
<div id="main">
	<div class="banner980"><img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/images/banner980.jpg" width="980" height="60" /></div>
	<div class="left">
		<div class="crtegories">
			<div class="crtegories_top"></div>
			<div class="crtegories_u">
				<ul>
					<!-- 左侧-分类检索部分 -->	
					<?php foreach($menus as $row):?>
					<li><a href="?typeid=<?php echo $row['id'];?>&area=<?php echo $area ?>&type=<?php echo $type ?>&year=<?php echo $year ?>" <?php if($row['id']==$typeid) echo "class='on'"?>><?php echo $row['typename'];?></a></li>
					<?php endforeach;?>
				</ul>
			</div>
		</div>
		<div class="paihang">
			<div class="paihang_top">手机电影下载排行</div>
			<div class="paihang_u">
				<ul>
					<script src="<?php echo $GLOBALS['cfg_cmsurl']; ?>/plus/getMovies1.php" type='text/javascript' language="javascript">
					</script>


					<?php
$atts = array();
$atts['tagname'] = 'arclist';
$atts['orderby'] = 'click';
$atts['channelid'] = '18';
$atts['typeid'] = '9';
$atts['limit'] = '0,10';
$blockValue = MakePublicTag($atts,$this->refObj,$fields); 
if(is_array($blockValue) && count($blockValue) > 0){
foreach( $blockValue as $key=>$fields )
{
?>
						<li class="hover">
							<span>[field:global.autoindex/]</span>
							<a href="[field:arcurl/]" title="[field:title/]" target="_blank">[field:title/]</a>
						</li>
					<?php
}
}
?>

				</ul>
			</div>
		</div>
		<div class="paihang">
			<div class="paihang_top">手机电影评分最高</div>
			<div class="paihang_u">
				<ul>
					<li class="hover"><span>1</span><a href="" title="金瓶双艳3GP MP4下载" target="_blank">金瓶双艳</a></li> 
					<li class="hover"><span>2</span><a href="" title="生化危机4：来生3GP MP4下载" target="_blank">生化危机4：来生</a></li> 
					<li class="hover"><span>3</span><a href="" title="钻石狗3GP MP4下载" target="_blank">钻石狗</a></li> 
					<li><span>4</span><a href="" title="世界大战3GP MP4下载" target="_blank">世界大战</a></li> 
					<li><span>5</span><a href="" title="女教师日记3GP MP4下载" target="_blank">女教师日记</a></li> 
					<li><span>6</span><a href="" title="子曰：食色性也3GP MP4下载" target="_blank">子曰：食色性也</a></li> 
					<li><span>7</span><a href="" title="在床上3GP MP4下载" target="_blank">在床上</a></li> 
					<li><span>8</span><a href="" title="2012末日预言3GP MP4下载" target="_blank">2012末日预言</a></li> 
					<li><span>9</span><a href="" title="顶层公寓3GP MP4下载" target="_blank">顶层公寓</a></li> 
					<li><span>10</span><a href="" title="海云台3GP MP4下载" target="_blank">海云台</a></li> 
					<li class="none"><a href="#" target="_blank">Top50>></a></li>
				</ul>
			</div>
		</div>
	</div>

	<div class="c_con">
		<div class="bord">
			<div class="r_lis">
				<span>手机<?php echo $nowmenu; ?></span>  
				<i>|</i>  
				<b>检索条件：类型[<font color="red"><?php if($type=='') {echo "不限";}else{echo $type;} ?></font>]
					<a href="#" target="_blank">
						<img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/images/c_close.jpg" />
					</a>  <font color="blue" size="3">+</font>  地区[<font color="red"><?php if($area=='') {echo "不限";}else{echo $area;} ?></font>]
					<a href="#" target="_blank">
						<img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/images/c_close.jpg" />
					</a>  <font color="blue" size="3">+</font>  时间[<font color="red"><?php if($year=='') {echo "不限";}else{echo $year;} ?></font>]
					<a href="#" target="_blank">
						<img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/images/c_close.jpg" />
					</a>
				</b>
			</div>
			<ul class="r_lis_con">
				<li>
					<b>按类型</b>
					<a href="?typeid=<?php echo $typeid;?>&year=<?php echo $year; ?>&area=<?php echo $area; ?>" <?php if($type=='') echo "class='all'"; ?>>全部</a> | 
					<a href="?typeid=<?php echo $typeid; ?>&year=<?php echo $year; ?>&area=<?php echo $area; ?>&type=动作" <?php if($type=='动作') echo "class='all'"; ?>>动作</a> | 
					<a href="?typeid=<?php echo $typeid; ?>&year=<?php echo $year; ?>&area=<?php echo $area; ?>&type=爱情" <?php if($type=='爱情') echo "class='all'"; ?>>爱情</a> | 
					<a href="?typeid=<?php echo $typeid; ?>&year=<?php echo $year; ?>&area=<?php echo $area; ?>&type=喜剧" <?php if($type=='喜剧') echo "class='all'"; ?>>喜剧</a> | 
					<a href="?typeid=<?php echo $typeid; ?>&year=<?php echo $year; ?>&area=<?php echo $area; ?>&type=恐怖" <?php if($type=='恐怖') echo "class='all'"; ?>>恐怖</a> | 
					<a href="?typeid=<?php echo $typeid; ?>&year=<?php echo $year; ?>&area=<?php echo $area; ?>&type=惊悚" <?php if($type=='惊悚') echo "class='all'"; ?>>惊悚</a> | 
					<a href="?typeid=<?php echo $typeid; ?>&year=<?php echo $year; ?>&area=<?php echo $area; ?>&type=悬疑" <?php if($type=='悬疑') echo "class='all'"; ?>>悬疑</a> | 
					<a href="?typeid=<?php echo $typeid; ?>&year=<?php echo $year; ?>&area=<?php echo $area; ?>&type=犯罪" <?php if($type=='犯罪') echo "class='all'"; ?>>犯罪</a> | 
					<a href="?typeid=<?php echo $typeid; ?>&year=<?php echo $year; ?>&area=<?php echo $area; ?>&type=战争" <?php if($type=='战争') echo "class='all'"; ?>>战争</a> | 
					<a href="?typeid=<?php echo $typeid; ?>&year=<?php echo $year; ?>&area=<?php echo $area; ?>&type=科幻" <?php if($type=='科幻') echo "class='all'"; ?>>科幻</a> | 
					<a href="?typeid=<?php echo $typeid; ?>&year=<?php echo $year; ?>&area=<?php echo $area; ?>&type=灾难" <?php if($type=='灾难') echo "class='all'"; ?>>灾难</a> | 
					<a href="?typeid=<?php echo $typeid; ?>&year=<?php echo $year; ?>&area=<?php echo $area; ?>&type=剧情" <?php if($type=='剧情') echo "class='all'"; ?>>剧情</a> | 
					<a href="?typeid=<?php echo $typeid; ?>&year=<?php echo $year; ?>&area=<?php echo $area; ?>&type=伦理" <?php if($type=='伦理') echo "class='all'"; ?>>伦理</a> | 
					<a href="?typeid=<?php echo $typeid; ?>&year=<?php echo $year; ?>&area=<?php echo $area; ?>&type=动漫" <?php if($type=='动漫') echo "class='all'"; ?>>动漫</a> | 
					<a href="?typeid=<?php echo $typeid; ?>&year=<?php echo $year; ?>&area=<?php echo $area; ?>&type=预告片" <?php if($type=='预告片') echo "class='all'"; ?>>预告片</a> | 
				</li>
				<li>
					<b>按地区</b>  
					<a href="?typeid=<?php echo $typeid;?>&year=<?php echo $year; ?>&type=<?php echo $type; ?>" <?php if($area=='') echo "class='all'"; ?>>全部
					</a> | 
					<a href="?typeid=<?php echo $typeid;?>&area=大陆&year=<?php echo $year; ?>&type=<?php echo $type; ?>" <?php if($area=='大陆') echo "class='all'"; ?>>大陆
					</a> | 
					<a href="?typeid=<?php echo $typeid;?>&area=欧美&year=<?php echo $year; ?>&type=<?php echo $type; ?>" <?php if($area=='欧美') echo "class='all'"; ?>>欧美
					</a> | 
					<a href="?typeid=<?php echo $typeid;?>&area=港台&year=<?php echo $year; ?>&type=<?php echo $type; ?>" <?php if($area=='港台') echo "class='all'"; ?>>港台
					</a> |
					<a href="?typeid=<?php echo $typeid;?>&area=日韩&year=<?php echo $year; ?>&type=<?php echo $type; ?>" <?php if($area=='日韩') echo "class='all'"; ?>>日韩
					</a> |
					<a href="?typeid=<?php echo $typeid;?>&area=其它&year=<?php echo $year; ?>&type=<?php echo $type; ?>" <?php if($area=='其它') echo "class='all'"; ?>>其它
					</a> 
				</li>
				<li class="masted">
					<b>按时间</b>  
					<a href="?typeid=<?php echo $typeid;?>&area=<?php echo $area; ?>&type=<?php echo $type; ?>" <?php if($year=='') echo "class='all'"; ?>>全部</a> | 
					<a href="?typeid=<?php echo $typeid;?>&area=<?php echo $area;  ?>&type=<?php echo $type; ?>&year=2015" <?php if($year==2015) echo "class='all'"; ?>>2015</a> | 
					<a href="?typeid=<?php echo $typeid;?>&area=<?php echo $area;  ?>&type=<?php echo $type; ?>&year=2014" <?php if($year==2014) echo "class='all'"; ?>>2014</a> | 
					<a href="?typeid=<?php echo $typeid;?>&area=<?php echo $area;  ?>&type=<?php echo $type; ?>&year=2013" <?php if($year==2013) echo "class='all'"; ?>>2013</a> | 
					<a href="?typeid=<?php echo $typeid;?>&area=<?php echo $area;  ?>&type=<?php echo $type; ?>&year=2012" <?php if($year==2012) echo "class='all'"; ?>>2012</a> | 
					<a href="?typeid=<?php echo $typeid;?>&area=<?php echo $area;  ?>&type=<?php echo $type; ?>&year=2011" <?php if($year==2011) echo "class='all'"; ?>>2011</a> | 
					<a href="?typeid=<?php echo $typeid;?>&area=<?php echo $area;  ?>&type=<?php echo $type; ?>&year=2010" <?php if($year==2010) echo "class='all'"; ?>>2010</a> | 
					<a href="?typeid=<?php echo $typeid;?>&area=<?php echo $area;  ?>&type=<?php echo $type; ?>&year=2009" <?php if($year==2009) echo "class='all'"; ?>>2009</a> | 
					<a href="?typeid=<?php echo $typeid;?>&area=<?php echo $area;  ?>&type=<?php echo $type; ?>&year=2008" <?php if($year==2008) echo "class='all'"; ?>>2008</a> | 
					<a href="?typeid=<?php echo $typeid;?>&area=<?php echo $area;  ?>&type=<?php echo $type; ?>&year=2007" <?php if($year==2007) echo "class='all'"; ?>>2007</a> | 
					<a href="?typeid=<?php echo $typeid;?>&area=<?php echo $area;  ?>&type=<?php echo $type; ?>&year=2006" <?php if($year==2006) echo "class='all'"; ?>>2006</a> | 
					<a href="?typeid=<?php echo $typeid;?>&area=<?php echo $area;  ?>&type=<?php echo $type; ?>&year=2005" <?php if($year==2005) echo "class='all'"; ?>>2005</a> | 
					<a href="?typeid=<?php echo $typeid;?>&area=<?php echo $area;  ?>&type=<?php echo $type; ?>&year=100" <?php if($year==100) echo "class='all'"; ?>>更早</a> | 
				</li>
			</ul>		
		</div>
		<ul class="c_con_list">
		<?php
$atts = array();
$atts['tagname'] = 'datalist';
$blockValue = $this->refObj->GetArcList($atts,$this->refObj,$fields); 
if(is_array($blockValue)){
foreach( $blockValue as $key=>$fields )
{
?>
			<!-- 检索结果显示 -->
			<!-- 因为该模板文件中的html代码会被引入到php文件中去运行，所以这里可以使用php代码 -->
			<li class="x<?php echo ++$k; ?>">
				<a href="<?php echo $fields['arcurl']; ?>" target="_blank"><img src="<?php echo $fields['litpic']; ?>" /></a>
				<p><?php echo $fields['language']; ?></p>
				<div>
					<a href="#" target="_blank"><?php echo $fields['title']; ?></a> 
					<img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/images/1.jpg" /> 
					<em><?php echo $fields['pfz']; ?>分</em>
				</div>
			</li>
		<?php
}
}?>				
		</ul>
		
		<!--page 分页条-->
		<div class="pages">
			<!--
			因为该模板文件会被包含到mysearch.php文件中去，所以这里可以使用php代码
			并且在这里可以直接使用mysearch.php文件中的一个对象$dlist
			-->
			<p style="color: gray; font-weight: bold; font-size: 14px;">共  <?php echo $dlist->totalResult; ?> 个<?php echo $nowmenu ?>，共 <?php echo $dlist->totalPage; ?> 页，当前页为第 <?php echo $dlist->pageNO; ?> 页</p>
			<div style="padding-top: 8px;"><?php
$atts = array();
$atts['tagname'] = 'pagelist';
$atts['listsize'] = '1';
 echo $this->refObj->GetPageList($atts,$this->refObj,$fields); 
?>
</div>  
		</div>
	</div>
</div>
<div id="bottom">
	<div class="bottom_so">
		<div class="bottom_so_wrap">
			<div class="bottom_searcher_tet"> 
			<form action="http://so.a67.com/so" method="get" name="q" target="_blank" id="search" > 
			<input type="text" name="q" class="bottom_focus" value="" /> 
			<input type="image" name="s" class="bottom_searchbutton" id="button" src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/images/botto_searcher.gif" align="absmiddle" /> 
			</form> 
			</div>
			<div class="bottom_keywords">
			<a href="http://so.a67.com/so?q=%E5%91%A8%E6%98%9F%E9%A9%B0&t=movie" target="_blank">周星驰</a>
			<a href="http://so.a67.com/so?q=%E5%98%BB%E6%B8%B8%E8%AE%B0&t=movie" target="_blank">嘻游记</a>
			<a href="http://so.a67.com/so?q=%E5%94%90%E5%B1%B1%E5%A4%A7%E5%9C%B0%E9%9C%87&t=movie" target="_blank">唐山大地震</a>
			<a href="http://so.a67.com/so?q=%E6%95%A2%E6%AD%BB%E9%98%9F&t=movie" target="_blank">敢死队</a> | 
			<a href="http://www.a67.com/zuixin/" target="_blank">最新电影</a>
			<a href="http://www.a67.com/paihang/" target="_blank">电影排行榜</a>
			</div>
		</div>
	</div>
	<div class="copyright"> 
		<p>Copyright © 2010 <a href="http://www.a67.com/">A67.COM</a> <a href="http://www.a67.com/">遛机网</a> All Rights Reserved  鲁ICP备05010054号</p> 
		<p>本站所有手机资源均为会员制作上传，本站仅提供存储空间，如侵犯到您的权益，请及时联系本站删除，本站不负任何法律责任！</p> 
</div>
</div>
</body>
</html>