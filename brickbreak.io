<mxfile host="app.diagrams.net" modified="2024-04-13T13:31:34.983Z" agent="Mozilla/5.0 (X11; Ubuntu; Linux x86_64; rv:124.0) Gecko/20100101 Firefox/124.0" etag="7ln5kOxCX7uJwIMYFGJl" version="24.2.3" type="github">
  <diagram id="C5RBs43oDa-KdzZeNtuy" name="Page-1">
    <mxGraphModel dx="4547" dy="2747" grid="1" gridSize="10" guides="1" tooltips="1" connect="1" arrows="1" fold="1" page="1" pageScale="1" pageWidth="827" pageHeight="1169" math="0" shadow="0">
      <root>
        <mxCell id="WIyWlLk6GJQsqaUBKTNV-0" />
        <mxCell id="WIyWlLk6GJQsqaUBKTNV-1" parent="WIyWlLk6GJQsqaUBKTNV-0" />
        <mxCell id="QoO8nKf0t1qkeYIg44UY-2" value="&lt;div&gt;View&lt;/div&gt;" style="shape=folder;fontStyle=1;spacingTop=10;tabWidth=40;tabHeight=14;tabPosition=left;html=1;whiteSpace=wrap;" parent="WIyWlLk6GJQsqaUBKTNV-1" vertex="1">
          <mxGeometry x="-800" y="-130" width="750" height="730" as="geometry" />
        </mxCell>
        <mxCell id="QoO8nKf0t1qkeYIg44UY-3" value="Controller" style="shape=folder;fontStyle=1;spacingTop=10;tabWidth=40;tabHeight=14;tabPosition=left;html=1;whiteSpace=wrap;" parent="WIyWlLk6GJQsqaUBKTNV-1" vertex="1">
          <mxGeometry x="-780" y="620" width="690" height="710" as="geometry" />
        </mxCell>
        <mxCell id="FPG22-UwowJ8bbtwbWqP-8" value="" style="group" parent="WIyWlLk6GJQsqaUBKTNV-1" vertex="1" connectable="0">
          <mxGeometry x="80" y="530" width="1660" height="1030" as="geometry" />
        </mxCell>
        <mxCell id="QoO8nKf0t1qkeYIg44UY-4" value="Model" style="shape=folder;fontStyle=1;spacingTop=10;tabWidth=40;tabHeight=14;tabPosition=left;html=1;whiteSpace=wrap;" parent="FPG22-UwowJ8bbtwbWqP-8" vertex="1">
          <mxGeometry width="1660.0000000000002" height="1030" as="geometry" />
        </mxCell>
        <mxCell id="FPG22-UwowJ8bbtwbWqP-17" value="Score" style="swimlane;fontStyle=1;align=center;verticalAlign=top;childLayout=stackLayout;horizontal=1;startSize=26;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=1;marginBottom=0;whiteSpace=wrap;html=1;" parent="FPG22-UwowJ8bbtwbWqP-8" vertex="1">
          <mxGeometry x="989.4543609022555" y="409.9981818181818" width="296.7752715121137" height="119.63636363636364" as="geometry" />
        </mxCell>
        <mxCell id="FPG22-UwowJ8bbtwbWqP-19" value="" style="line;strokeWidth=1;fillColor=none;align=left;verticalAlign=middle;spacingTop=-1;spacingLeft=3;spacingRight=3;rotatable=0;labelPosition=right;points=[];portConstraint=eastwest;strokeColor=inherit;" parent="FPG22-UwowJ8bbtwbWqP-17" vertex="1">
          <mxGeometry y="26" width="296.7752715121137" height="12.484848484848486" as="geometry" />
        </mxCell>
        <mxCell id="FPG22-UwowJ8bbtwbWqP-18" value="# score_value: int" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;whiteSpace=wrap;html=1;" parent="FPG22-UwowJ8bbtwbWqP-17" vertex="1">
          <mxGeometry y="38.484848484848484" width="296.7752715121137" height="40.57575757575758" as="geometry" />
        </mxCell>
        <mxCell id="FPG22-UwowJ8bbtwbWqP-20" value="&lt;div&gt;+ method(type): type&lt;/div&gt;&lt;div&gt;&lt;br&gt;&lt;/div&gt;&lt;div&gt;&lt;br&gt;&lt;/div&gt;" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;whiteSpace=wrap;html=1;" parent="FPG22-UwowJ8bbtwbWqP-17" vertex="1">
          <mxGeometry y="79.06060606060606" width="296.7752715121137" height="40.57575757575758" as="geometry" />
        </mxCell>
        <mxCell id="FPG22-UwowJ8bbtwbWqP-21" value="Game" style="swimlane;fontStyle=1;align=center;verticalAlign=top;childLayout=stackLayout;horizontal=1;startSize=26;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=1;marginBottom=0;whiteSpace=wrap;html=1;" parent="FPG22-UwowJ8bbtwbWqP-8" vertex="1">
          <mxGeometry x="1020.1649958228908" y="101.43939393939394" width="296.7752715121137" height="119.63636363636364" as="geometry" />
        </mxCell>
        <mxCell id="FPG22-UwowJ8bbtwbWqP-22" value="&lt;div&gt;- in_game_balls:Vector&amp;lt;Ball&amp;gt;&lt;/div&gt;&lt;div&gt;- solids: Vector&amp;lt;Solid&amp;gt;&lt;br&gt;&lt;/div&gt;" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;whiteSpace=wrap;html=1;" parent="FPG22-UwowJ8bbtwbWqP-21" vertex="1">
          <mxGeometry y="26" width="296.7752715121137" height="40.57575757575758" as="geometry" />
        </mxCell>
        <mxCell id="FPG22-UwowJ8bbtwbWqP-23" value="" style="line;strokeWidth=1;fillColor=none;align=left;verticalAlign=middle;spacingTop=-1;spacingLeft=3;spacingRight=3;rotatable=0;labelPosition=right;points=[];portConstraint=eastwest;strokeColor=inherit;" parent="FPG22-UwowJ8bbtwbWqP-21" vertex="1">
          <mxGeometry y="66.57575757575758" width="296.7752715121137" height="12.484848484848486" as="geometry" />
        </mxCell>
        <mxCell id="FPG22-UwowJ8bbtwbWqP-24" value="+ method(type): type" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;whiteSpace=wrap;html=1;" parent="FPG22-UwowJ8bbtwbWqP-21" vertex="1">
          <mxGeometry y="79.06060606060606" width="296.7752715121137" height="40.57575757575758" as="geometry" />
        </mxCell>
        <mxCell id="4vgxy_3oWF0OCX113woS-18" value="&lt;div&gt;Items&lt;/div&gt;" style="shape=folder;fontStyle=1;spacingTop=10;tabWidth=40;tabHeight=14;tabPosition=left;html=1;whiteSpace=wrap;" parent="FPG22-UwowJ8bbtwbWqP-8" vertex="1">
          <mxGeometry x="470" y="20" width="320" height="910" as="geometry" />
        </mxCell>
        <mxCell id="FPG22-UwowJ8bbtwbWqP-5" value="Wall" style="shape=folder;fontStyle=1;spacingTop=10;tabWidth=40;tabHeight=14;tabPosition=left;html=1;whiteSpace=wrap;" parent="FPG22-UwowJ8bbtwbWqP-8" vertex="1">
          <mxGeometry x="443.641052631579" y="620.0045454545455" width="146.35458646616544" height="210.6818181818182" as="geometry" />
        </mxCell>
        <mxCell id="FPG22-UwowJ8bbtwbWqP-35" value="bonus" style="shape=folder;fontStyle=1;spacingTop=10;tabWidth=40;tabHeight=14;tabPosition=left;html=1;whiteSpace=wrap;" parent="FPG22-UwowJ8bbtwbWqP-8" vertex="1">
          <mxGeometry x="810" y="549.21" width="850" height="423.18" as="geometry" />
        </mxCell>
        <mxCell id="FPG22-UwowJ8bbtwbWqP-36" value="" style="group" parent="FPG22-UwowJ8bbtwbWqP-8" vertex="1" connectable="0">
          <mxGeometry x="1434.358813700919" y="769.8830303030303" width="204.03299916457814" height="156.06060606060606" as="geometry" />
        </mxCell>
        <mxCell id="FPG22-UwowJ8bbtwbWqP-25" value="«enum»&lt;br&gt;&lt;b&gt;BonusType&lt;/b&gt;" style="html=1;whiteSpace=wrap;" parent="FPG22-UwowJ8bbtwbWqP-36" vertex="1">
          <mxGeometry width="204.03299916457814" height="78.03030303030303" as="geometry" />
        </mxCell>
        <mxCell id="FPG22-UwowJ8bbtwbWqP-34" value="" style="html=1;whiteSpace=wrap;" parent="FPG22-UwowJ8bbtwbWqP-36" vertex="1">
          <mxGeometry y="78.03030303030303" width="204.03299916457814" height="78.03030303030303" as="geometry" />
        </mxCell>
        <mxCell id="FPG22-UwowJ8bbtwbWqP-43" value="BallBonus" style="swimlane;fontStyle=1;align=center;verticalAlign=top;childLayout=stackLayout;horizontal=1;startSize=26;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=1;marginBottom=0;whiteSpace=wrap;html=1;" parent="FPG22-UwowJ8bbtwbWqP-8" vertex="1">
          <mxGeometry x="850.773071139387" y="819.58" width="212.18045112781957" height="119.63636363636364" as="geometry" />
        </mxCell>
        <mxCell id="FPG22-UwowJ8bbtwbWqP-44" value="# score_value: int" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;whiteSpace=wrap;html=1;" parent="FPG22-UwowJ8bbtwbWqP-43" vertex="1">
          <mxGeometry y="26" width="212.18045112781957" height="40.57575757575758" as="geometry" />
        </mxCell>
        <mxCell id="FPG22-UwowJ8bbtwbWqP-45" value="" style="line;strokeWidth=1;fillColor=none;align=left;verticalAlign=middle;spacingTop=-1;spacingLeft=3;spacingRight=3;rotatable=0;labelPosition=right;points=[];portConstraint=eastwest;strokeColor=inherit;" parent="FPG22-UwowJ8bbtwbWqP-43" vertex="1">
          <mxGeometry y="66.57575757575758" width="212.18045112781957" height="12.484848484848486" as="geometry" />
        </mxCell>
        <mxCell id="FPG22-UwowJ8bbtwbWqP-46" value="&lt;div&gt;+ method(type): type&lt;/div&gt;&lt;div&gt;&lt;br&gt;&lt;/div&gt;&lt;div&gt;&lt;br&gt;&lt;/div&gt;" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;whiteSpace=wrap;html=1;" parent="FPG22-UwowJ8bbtwbWqP-43" vertex="1">
          <mxGeometry y="79.06060606060606" width="212.18045112781957" height="40.57575757575758" as="geometry" />
        </mxCell>
        <mxCell id="FPG22-UwowJ8bbtwbWqP-48" value="Extends" style="endArrow=block;endSize=16;endFill=0;html=1;rounded=0;exitX=0.5;exitY=0;exitDx=0;exitDy=0;entryX=0.5;entryY=1;entryDx=0;entryDy=0;" parent="FPG22-UwowJ8bbtwbWqP-8" source="FPG22-UwowJ8bbtwbWqP-43" edge="1">
          <mxGeometry width="160" relative="1" as="geometry">
            <mxPoint x="1328.525786260523" y="738.2163636363637" as="sourcePoint" />
            <mxPoint x="1011.6432967032965" y="759.58" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="FPG22-UwowJ8bbtwbWqP-50" value="PlateformBonus" style="swimlane;fontStyle=1;align=center;verticalAlign=top;childLayout=stackLayout;horizontal=1;startSize=26;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=1;marginBottom=0;whiteSpace=wrap;html=1;" parent="FPG22-UwowJ8bbtwbWqP-8" vertex="1">
          <mxGeometry x="1074.0493117408907" y="819.58" width="212.18045112781957" height="119.63636363636364" as="geometry" />
        </mxCell>
        <mxCell id="FPG22-UwowJ8bbtwbWqP-51" value="# score_value: int" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;whiteSpace=wrap;html=1;" parent="FPG22-UwowJ8bbtwbWqP-50" vertex="1">
          <mxGeometry y="26" width="212.18045112781957" height="40.57575757575758" as="geometry" />
        </mxCell>
        <mxCell id="FPG22-UwowJ8bbtwbWqP-52" value="" style="line;strokeWidth=1;fillColor=none;align=left;verticalAlign=middle;spacingTop=-1;spacingLeft=3;spacingRight=3;rotatable=0;labelPosition=right;points=[];portConstraint=eastwest;strokeColor=inherit;" parent="FPG22-UwowJ8bbtwbWqP-50" vertex="1">
          <mxGeometry y="66.57575757575758" width="212.18045112781957" height="12.484848484848486" as="geometry" />
        </mxCell>
        <mxCell id="FPG22-UwowJ8bbtwbWqP-53" value="&lt;div&gt;+ method(type): type&lt;/div&gt;&lt;div&gt;&lt;br&gt;&lt;/div&gt;&lt;div&gt;&lt;br&gt;&lt;/div&gt;" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;whiteSpace=wrap;html=1;" parent="FPG22-UwowJ8bbtwbWqP-50" vertex="1">
          <mxGeometry y="79.06060606060606" width="212.18045112781957" height="40.57575757575758" as="geometry" />
        </mxCell>
        <mxCell id="FPG22-UwowJ8bbtwbWqP-47" value="Extends" style="endArrow=block;endSize=16;endFill=0;html=1;rounded=0;exitX=0.5;exitY=0;exitDx=0;exitDy=0;" parent="FPG22-UwowJ8bbtwbWqP-8" source="FPG22-UwowJ8bbtwbWqP-50" edge="1">
          <mxGeometry width="160" relative="1" as="geometry">
            <mxPoint x="1160.0323192596877" y="799.58" as="sourcePoint" />
            <mxPoint x="1013.0287102371312" y="759.58" as="targetPoint" />
            <mxPoint as="offset" />
          </mxGeometry>
        </mxCell>
        <mxCell id="FPG22-UwowJ8bbtwbWqP-55" value="Bonus" style="swimlane;fontStyle=1;align=center;verticalAlign=top;childLayout=stackLayout;horizontal=1;startSize=26;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=1;marginBottom=0;whiteSpace=wrap;html=1;" parent="FPG22-UwowJ8bbtwbWqP-8" vertex="1">
          <mxGeometry x="862.372036384668" y="638.5781818181819" width="296.7752715121137" height="119.63636363636364" as="geometry" />
        </mxCell>
        <mxCell id="FPG22-UwowJ8bbtwbWqP-56" value="# : int" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;whiteSpace=wrap;html=1;" parent="FPG22-UwowJ8bbtwbWqP-55" vertex="1">
          <mxGeometry y="26" width="296.7752715121137" height="40.57575757575758" as="geometry" />
        </mxCell>
        <mxCell id="FPG22-UwowJ8bbtwbWqP-57" value="" style="line;strokeWidth=1;fillColor=none;align=left;verticalAlign=middle;spacingTop=-1;spacingLeft=3;spacingRight=3;rotatable=0;labelPosition=right;points=[];portConstraint=eastwest;strokeColor=inherit;" parent="FPG22-UwowJ8bbtwbWqP-55" vertex="1">
          <mxGeometry y="66.57575757575758" width="296.7752715121137" height="12.484848484848486" as="geometry" />
        </mxCell>
        <mxCell id="FPG22-UwowJ8bbtwbWqP-58" value="&lt;div&gt;+ method(type): type&lt;/div&gt;&lt;div&gt;&lt;br&gt;&lt;/div&gt;&lt;div&gt;&lt;br&gt;&lt;/div&gt;" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;whiteSpace=wrap;html=1;" parent="FPG22-UwowJ8bbtwbWqP-55" vertex="1">
          <mxGeometry y="79.06060606060606" width="296.7752715121137" height="40.57575757575758" as="geometry" />
        </mxCell>
        <mxCell id="4vgxy_3oWF0OCX113woS-17" value="" style="group" parent="FPG22-UwowJ8bbtwbWqP-8" vertex="1" connectable="0">
          <mxGeometry x="29.99776223776223" y="54.49939393939394" width="377.4236363636364" height="520.0006060606061" as="geometry" />
        </mxCell>
        <mxCell id="FPG22-UwowJ8bbtwbWqP-4" value="Ball" style="shape=folder;fontStyle=1;spacingTop=10;tabWidth=40;tabHeight=14;tabPosition=left;html=1;whiteSpace=wrap;" parent="4vgxy_3oWF0OCX113woS-17" vertex="1">
          <mxGeometry y="214.32060606060605" width="377.4236363636364" height="305.68" as="geometry" />
        </mxCell>
        <mxCell id="9JS6WIy_XZyJuzWoMZv4-1" value="Solid" style="swimlane;fontStyle=1;align=center;verticalAlign=top;childLayout=stackLayout;horizontal=1;startSize=26;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=1;marginBottom=0;whiteSpace=wrap;html=1;" parent="4vgxy_3oWF0OCX113woS-17" vertex="1">
          <mxGeometry x="40.3224028602976" width="296.7752715121137" height="119.63636363636364" as="geometry" />
        </mxCell>
        <mxCell id="9JS6WIy_XZyJuzWoMZv4-2" value="- position: Vector&amp;lt;int,int&amp;gt;" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;whiteSpace=wrap;html=1;" parent="9JS6WIy_XZyJuzWoMZv4-1" vertex="1">
          <mxGeometry y="26" width="296.7752715121137" height="40.57575757575758" as="geometry" />
        </mxCell>
        <mxCell id="9JS6WIy_XZyJuzWoMZv4-3" value="" style="line;strokeWidth=1;fillColor=none;align=left;verticalAlign=middle;spacingTop=-1;spacingLeft=3;spacingRight=3;rotatable=0;labelPosition=right;points=[];portConstraint=eastwest;strokeColor=inherit;" parent="9JS6WIy_XZyJuzWoMZv4-1" vertex="1">
          <mxGeometry y="66.57575757575758" width="296.7752715121137" height="12.484848484848486" as="geometry" />
        </mxCell>
        <mxCell id="9JS6WIy_XZyJuzWoMZv4-4" value="+ collided_by(Ball): void" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;whiteSpace=wrap;html=1;" parent="9JS6WIy_XZyJuzWoMZv4-1" vertex="1">
          <mxGeometry y="79.06060606060606" width="296.7752715121137" height="40.57575757575758" as="geometry" />
        </mxCell>
        <mxCell id="9JS6WIy_XZyJuzWoMZv4-5" value="Ball" style="swimlane;fontStyle=1;align=center;verticalAlign=top;childLayout=stackLayout;horizontal=1;startSize=26;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=1;marginBottom=0;whiteSpace=wrap;html=1;" parent="4vgxy_3oWF0OCX113woS-17" vertex="1">
          <mxGeometry x="17.372612650507392" y="240" width="296.7752715121137" height="119.63636363636364" as="geometry" />
        </mxCell>
        <mxCell id="9JS6WIy_XZyJuzWoMZv4-6" value="- direction: Vector&amp;lt;int,int&amp;gt;" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;whiteSpace=wrap;html=1;" parent="9JS6WIy_XZyJuzWoMZv4-5" vertex="1">
          <mxGeometry y="26" width="296.7752715121137" height="40.57575757575758" as="geometry" />
        </mxCell>
        <mxCell id="9JS6WIy_XZyJuzWoMZv4-7" value="" style="line;strokeWidth=1;fillColor=none;align=left;verticalAlign=middle;spacingTop=-1;spacingLeft=3;spacingRight=3;rotatable=0;labelPosition=right;points=[];portConstraint=eastwest;strokeColor=inherit;" parent="9JS6WIy_XZyJuzWoMZv4-5" vertex="1">
          <mxGeometry y="66.57575757575758" width="296.7752715121137" height="12.484848484848486" as="geometry" />
        </mxCell>
        <mxCell id="9JS6WIy_XZyJuzWoMZv4-8" value="&lt;div&gt;+ move(): void&lt;/div&gt;&lt;div&gt;+ tick_time(): void&lt;/div&gt;" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;whiteSpace=wrap;html=1;" parent="9JS6WIy_XZyJuzWoMZv4-5" vertex="1">
          <mxGeometry y="79.06060606060606" width="296.7752715121137" height="40.57575757575758" as="geometry" />
        </mxCell>
        <mxCell id="9JS6WIy_XZyJuzWoMZv4-9" value="Extends" style="endArrow=block;endSize=16;endFill=0;html=1;rounded=0;exitX=0.5;exitY=0;exitDx=0;exitDy=0;entryX=0.484;entryY=0.973;entryDx=0;entryDy=0;entryPerimeter=0;" parent="4vgxy_3oWF0OCX113woS-17" source="9JS6WIy_XZyJuzWoMZv4-5" target="9JS6WIy_XZyJuzWoMZv4-4" edge="1">
          <mxGeometry width="160" relative="1" as="geometry">
            <mxPoint x="319.19594405594404" y="380.00060606060606" as="sourcePoint" />
            <mxPoint x="504.9302097902098" y="380.00060606060606" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="FPG22-UwowJ8bbtwbWqP-6" value="Platform" style="shape=folder;fontStyle=1;spacingTop=10;tabWidth=40;tabHeight=14;tabPosition=left;html=1;whiteSpace=wrap;" parent="FPG22-UwowJ8bbtwbWqP-8" vertex="1">
          <mxGeometry x="590" y="490" width="198.23" height="390" as="geometry" />
        </mxCell>
        <mxCell id="4vgxy_3oWF0OCX113woS-1" value="PlateformController" style="swimlane;fontStyle=1;align=center;verticalAlign=top;childLayout=stackLayout;horizontal=1;startSize=26;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=1;marginBottom=0;whiteSpace=wrap;html=1;" parent="WIyWlLk6GJQsqaUBKTNV-1" vertex="1">
          <mxGeometry x="-493" y="660" width="160" height="100" as="geometry" />
        </mxCell>
        <mxCell id="4vgxy_3oWF0OCX113woS-2" value="+ plateforme: Plateform" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;whiteSpace=wrap;html=1;" parent="4vgxy_3oWF0OCX113woS-1" vertex="1">
          <mxGeometry y="26" width="160" height="26" as="geometry" />
        </mxCell>
        <mxCell id="4vgxy_3oWF0OCX113woS-3" value="" style="line;strokeWidth=1;fillColor=none;align=left;verticalAlign=middle;spacingTop=-1;spacingLeft=3;spacingRight=3;rotatable=0;labelPosition=right;points=[];portConstraint=eastwest;strokeColor=inherit;" parent="4vgxy_3oWF0OCX113woS-1" vertex="1">
          <mxGeometry y="52" width="160" height="8" as="geometry" />
        </mxCell>
        <mxCell id="4vgxy_3oWF0OCX113woS-4" value="&lt;div&gt;+ moveright(): void&lt;/div&gt;&lt;div&gt;+ moveleftt(): void&lt;/div&gt;" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;whiteSpace=wrap;html=1;" parent="4vgxy_3oWF0OCX113woS-1" vertex="1">
          <mxGeometry y="60" width="160" height="40" as="geometry" />
        </mxCell>
        <mxCell id="4vgxy_3oWF0OCX113woS-5" value="PlateformMouseController" style="swimlane;fontStyle=1;align=center;verticalAlign=top;childLayout=stackLayout;horizontal=1;startSize=26;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=1;marginBottom=0;whiteSpace=wrap;html=1;" parent="WIyWlLk6GJQsqaUBKTNV-1" vertex="1">
          <mxGeometry x="-680" y="820" width="160" height="100" as="geometry" />
        </mxCell>
        <mxCell id="4vgxy_3oWF0OCX113woS-6" value="+ plateforme: Plateform" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;whiteSpace=wrap;html=1;" parent="4vgxy_3oWF0OCX113woS-5" vertex="1">
          <mxGeometry y="26" width="160" height="26" as="geometry" />
        </mxCell>
        <mxCell id="4vgxy_3oWF0OCX113woS-7" value="" style="line;strokeWidth=1;fillColor=none;align=left;verticalAlign=middle;spacingTop=-1;spacingLeft=3;spacingRight=3;rotatable=0;labelPosition=right;points=[];portConstraint=eastwest;strokeColor=inherit;" parent="4vgxy_3oWF0OCX113woS-5" vertex="1">
          <mxGeometry y="52" width="160" height="8" as="geometry" />
        </mxCell>
        <mxCell id="4vgxy_3oWF0OCX113woS-8" value="&lt;div&gt;+ moveright(): void&lt;/div&gt;&lt;div&gt;+ moveleftt(): void&lt;/div&gt;" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;whiteSpace=wrap;html=1;" parent="4vgxy_3oWF0OCX113woS-5" vertex="1">
          <mxGeometry y="60" width="160" height="40" as="geometry" />
        </mxCell>
        <mxCell id="4vgxy_3oWF0OCX113woS-9" value="PlateformKeyController" style="swimlane;fontStyle=1;align=center;verticalAlign=top;childLayout=stackLayout;horizontal=1;startSize=26;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=1;marginBottom=0;whiteSpace=wrap;html=1;" parent="WIyWlLk6GJQsqaUBKTNV-1" vertex="1">
          <mxGeometry x="-310" y="820" width="160" height="100" as="geometry" />
        </mxCell>
        <mxCell id="4vgxy_3oWF0OCX113woS-10" value="+ plateforme: Plateform" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;whiteSpace=wrap;html=1;" parent="4vgxy_3oWF0OCX113woS-9" vertex="1">
          <mxGeometry y="26" width="160" height="26" as="geometry" />
        </mxCell>
        <mxCell id="4vgxy_3oWF0OCX113woS-11" value="" style="line;strokeWidth=1;fillColor=none;align=left;verticalAlign=middle;spacingTop=-1;spacingLeft=3;spacingRight=3;rotatable=0;labelPosition=right;points=[];portConstraint=eastwest;strokeColor=inherit;" parent="4vgxy_3oWF0OCX113woS-9" vertex="1">
          <mxGeometry y="52" width="160" height="8" as="geometry" />
        </mxCell>
        <mxCell id="4vgxy_3oWF0OCX113woS-12" value="&lt;div&gt;+ moveright(): void&lt;/div&gt;&lt;div&gt;+ moveleftt(): void&lt;/div&gt;" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;whiteSpace=wrap;html=1;" parent="4vgxy_3oWF0OCX113woS-9" vertex="1">
          <mxGeometry y="60" width="160" height="40" as="geometry" />
        </mxCell>
        <mxCell id="4vgxy_3oWF0OCX113woS-13" value="Extends" style="endArrow=block;endSize=16;endFill=0;html=1;rounded=0;entryX=0.5;entryY=1.05;entryDx=0;entryDy=0;entryPerimeter=0;exitX=0.5;exitY=0;exitDx=0;exitDy=0;" parent="WIyWlLk6GJQsqaUBKTNV-1" source="4vgxy_3oWF0OCX113woS-5" target="4vgxy_3oWF0OCX113woS-4" edge="1">
          <mxGeometry width="160" relative="1" as="geometry">
            <mxPoint x="-430" y="980" as="sourcePoint" />
            <mxPoint x="-270" y="980" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="4vgxy_3oWF0OCX113woS-14" value="Extends" style="endArrow=block;endSize=16;endFill=0;html=1;rounded=0;exitX=0.5;exitY=0;exitDx=0;exitDy=0;" parent="WIyWlLk6GJQsqaUBKTNV-1" source="4vgxy_3oWF0OCX113woS-9" edge="1">
          <mxGeometry width="160" relative="1" as="geometry">
            <mxPoint x="-590" y="830" as="sourcePoint" />
            <mxPoint x="-420" y="760" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="3kA44cYX4WbxwQUwThy1-0" value="GameView" style="swimlane;fontStyle=1;align=center;verticalAlign=top;childLayout=stackLayout;horizontal=1;startSize=26;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=1;marginBottom=0;whiteSpace=wrap;html=1;" vertex="1" parent="WIyWlLk6GJQsqaUBKTNV-1">
          <mxGeometry x="-750" y="-60" width="160" height="140" as="geometry" />
        </mxCell>
        <mxCell id="3kA44cYX4WbxwQUwThy1-1" value="+ field: type" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;whiteSpace=wrap;html=1;" vertex="1" parent="3kA44cYX4WbxwQUwThy1-0">
          <mxGeometry y="26" width="160" height="26" as="geometry" />
        </mxCell>
        <mxCell id="3kA44cYX4WbxwQUwThy1-2" value="" style="line;strokeWidth=1;fillColor=none;align=left;verticalAlign=middle;spacingTop=-1;spacingLeft=3;spacingRight=3;rotatable=0;labelPosition=right;points=[];portConstraint=eastwest;strokeColor=inherit;" vertex="1" parent="3kA44cYX4WbxwQUwThy1-0">
          <mxGeometry y="52" width="160" height="8" as="geometry" />
        </mxCell>
        <mxCell id="3kA44cYX4WbxwQUwThy1-3" value="&lt;div&gt;+ render(void): void&lt;/div&gt;&lt;div&gt;+ update(void):void&lt;/div&gt;&lt;div&gt;+ clean(void):void&lt;/div&gt;&lt;div&gt;+ handleevent(void):void&lt;/div&gt;&lt;div&gt;+ init(args) : void&lt;br&gt;&lt;/div&gt;" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;whiteSpace=wrap;html=1;" vertex="1" parent="3kA44cYX4WbxwQUwThy1-0">
          <mxGeometry y="60" width="160" height="80" as="geometry" />
        </mxCell>
        <mxCell id="3kA44cYX4WbxwQUwThy1-4" value="HomeView" style="swimlane;fontStyle=1;align=center;verticalAlign=top;childLayout=stackLayout;horizontal=1;startSize=26;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=1;marginBottom=0;whiteSpace=wrap;html=1;" vertex="1" parent="WIyWlLk6GJQsqaUBKTNV-1">
          <mxGeometry x="-760" y="210" width="160" height="140" as="geometry" />
        </mxCell>
        <mxCell id="3kA44cYX4WbxwQUwThy1-5" value="+ field: type" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;whiteSpace=wrap;html=1;" vertex="1" parent="3kA44cYX4WbxwQUwThy1-4">
          <mxGeometry y="26" width="160" height="26" as="geometry" />
        </mxCell>
        <mxCell id="3kA44cYX4WbxwQUwThy1-6" value="" style="line;strokeWidth=1;fillColor=none;align=left;verticalAlign=middle;spacingTop=-1;spacingLeft=3;spacingRight=3;rotatable=0;labelPosition=right;points=[];portConstraint=eastwest;strokeColor=inherit;" vertex="1" parent="3kA44cYX4WbxwQUwThy1-4">
          <mxGeometry y="52" width="160" height="8" as="geometry" />
        </mxCell>
        <mxCell id="3kA44cYX4WbxwQUwThy1-7" value="&lt;div&gt;+ render(void): void&lt;/div&gt;&lt;div&gt;+ update(void):void&lt;/div&gt;&lt;div&gt;+ clean(void):void&lt;/div&gt;&lt;div&gt;+ handleevent(void):void&lt;/div&gt;&lt;div&gt;+ init(args) : void&lt;br&gt;&lt;/div&gt;" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;whiteSpace=wrap;html=1;" vertex="1" parent="3kA44cYX4WbxwQUwThy1-4">
          <mxGeometry y="60" width="160" height="80" as="geometry" />
        </mxCell>
        <mxCell id="3kA44cYX4WbxwQUwThy1-8" value="LevelChoiceView" style="swimlane;fontStyle=1;align=center;verticalAlign=top;childLayout=stackLayout;horizontal=1;startSize=26;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=1;marginBottom=0;whiteSpace=wrap;html=1;" vertex="1" parent="WIyWlLk6GJQsqaUBKTNV-1">
          <mxGeometry x="-505" y="-30" width="160" height="140" as="geometry" />
        </mxCell>
        <mxCell id="3kA44cYX4WbxwQUwThy1-9" value="+ field: type" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;whiteSpace=wrap;html=1;" vertex="1" parent="3kA44cYX4WbxwQUwThy1-8">
          <mxGeometry y="26" width="160" height="26" as="geometry" />
        </mxCell>
        <mxCell id="3kA44cYX4WbxwQUwThy1-10" value="" style="line;strokeWidth=1;fillColor=none;align=left;verticalAlign=middle;spacingTop=-1;spacingLeft=3;spacingRight=3;rotatable=0;labelPosition=right;points=[];portConstraint=eastwest;strokeColor=inherit;" vertex="1" parent="3kA44cYX4WbxwQUwThy1-8">
          <mxGeometry y="52" width="160" height="8" as="geometry" />
        </mxCell>
        <mxCell id="3kA44cYX4WbxwQUwThy1-11" value="&lt;div&gt;+ render(void): void&lt;/div&gt;&lt;div&gt;+ update(void):void&lt;/div&gt;&lt;div&gt;+ clean(void):void&lt;/div&gt;&lt;div&gt;+ handleevent(void):void&lt;/div&gt;&lt;div&gt;+ init(args) : void&lt;br&gt;&lt;/div&gt;" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;whiteSpace=wrap;html=1;" vertex="1" parent="3kA44cYX4WbxwQUwThy1-8">
          <mxGeometry y="60" width="160" height="80" as="geometry" />
        </mxCell>
        <mxCell id="3kA44cYX4WbxwQUwThy1-12" value="EndGameView" style="swimlane;fontStyle=1;align=center;verticalAlign=top;childLayout=stackLayout;horizontal=1;startSize=26;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=1;marginBottom=0;whiteSpace=wrap;html=1;" vertex="1" parent="WIyWlLk6GJQsqaUBKTNV-1">
          <mxGeometry x="-530" y="325" width="160" height="140" as="geometry" />
        </mxCell>
        <mxCell id="3kA44cYX4WbxwQUwThy1-13" value="+ field: type" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;whiteSpace=wrap;html=1;" vertex="1" parent="3kA44cYX4WbxwQUwThy1-12">
          <mxGeometry y="26" width="160" height="26" as="geometry" />
        </mxCell>
        <mxCell id="3kA44cYX4WbxwQUwThy1-14" value="" style="line;strokeWidth=1;fillColor=none;align=left;verticalAlign=middle;spacingTop=-1;spacingLeft=3;spacingRight=3;rotatable=0;labelPosition=right;points=[];portConstraint=eastwest;strokeColor=inherit;" vertex="1" parent="3kA44cYX4WbxwQUwThy1-12">
          <mxGeometry y="52" width="160" height="8" as="geometry" />
        </mxCell>
        <mxCell id="3kA44cYX4WbxwQUwThy1-15" value="&lt;div&gt;+ render(void): void&lt;/div&gt;&lt;div&gt;+ update(void):void&lt;/div&gt;&lt;div&gt;+ clean(void):void&lt;/div&gt;&lt;div&gt;+ handleevent(void):void&lt;/div&gt;&lt;div&gt;+ init(args) : void&lt;br&gt;&lt;/div&gt;" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;whiteSpace=wrap;html=1;" vertex="1" parent="3kA44cYX4WbxwQUwThy1-12">
          <mxGeometry y="60" width="160" height="80" as="geometry" />
        </mxCell>
      </root>
    </mxGraphModel>
  </diagram>
</mxfile>
