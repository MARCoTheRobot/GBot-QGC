(function(e){function t(t){for(var r,i,c=t[0],u=t[1],s=t[2],l=0,p=[];l<c.length;l++)i=c[l],Object.prototype.hasOwnProperty.call(o,i)&&o[i]&&p.push(o[i][0]),o[i]=0;for(r in u)Object.prototype.hasOwnProperty.call(u,r)&&(e[r]=u[r]);f&&f(t);while(p.length)p.shift()();return a.push.apply(a,s||[]),n()}function n(){for(var e,t=0;t<a.length;t++){for(var n=a[t],r=!0,i=1;i<n.length;i++){var u=n[i];0!==o[u]&&(r=!1)}r&&(a.splice(t--,1),e=c(c.s=n[0]))}return e}var r={},o={app:0},a=[];function i(e){return c.p+"js/"+({}[e]||e)+"."+{"chunk-2d0abc10":"faeddd5e"}[e]+".js"}function c(t){if(r[t])return r[t].exports;var n=r[t]={i:t,l:!1,exports:{}};return e[t].call(n.exports,n,n.exports,c),n.l=!0,n.exports}c.e=function(e){var t=[],n=o[e];if(0!==n)if(n)t.push(n[2]);else{var r=new Promise((function(t,r){n=o[e]=[t,r]}));t.push(n[2]=r);var a,u=document.createElement("script");u.charset="utf-8",u.timeout=120,c.nc&&u.setAttribute("nonce",c.nc),u.src=i(e);var s=new Error;a=function(t){u.onerror=u.onload=null,clearTimeout(l);var n=o[e];if(0!==n){if(n){var r=t&&("load"===t.type?"missing":t.type),a=t&&t.target&&t.target.src;s.message="Loading chunk "+e+" failed.\n("+r+": "+a+")",s.name="ChunkLoadError",s.type=r,s.request=a,n[1](s)}o[e]=void 0}};var l=setTimeout((function(){a({type:"timeout",target:u})}),12e4);u.onerror=u.onload=a,document.head.appendChild(u)}return Promise.all(t)},c.m=e,c.c=r,c.d=function(e,t,n){c.o(e,t)||Object.defineProperty(e,t,{enumerable:!0,get:n})},c.r=function(e){"undefined"!==typeof Symbol&&Symbol.toStringTag&&Object.defineProperty(e,Symbol.toStringTag,{value:"Module"}),Object.defineProperty(e,"__esModule",{value:!0})},c.t=function(e,t){if(1&t&&(e=c(e)),8&t)return e;if(4&t&&"object"===typeof e&&e&&e.__esModule)return e;var n=Object.create(null);if(c.r(n),Object.defineProperty(n,"default",{enumerable:!0,value:e}),2&t&&"string"!=typeof e)for(var r in e)c.d(n,r,function(t){return e[t]}.bind(null,r));return n},c.n=function(e){var t=e&&e.__esModule?function(){return e["default"]}:function(){return e};return c.d(t,"a",t),t},c.o=function(e,t){return Object.prototype.hasOwnProperty.call(e,t)},c.p="/",c.oe=function(e){throw console.error(e),e};var u=window["webpackJsonp"]=window["webpackJsonp"]||[],s=u.push.bind(u);u.push=t,u=u.slice();for(var l=0;l<u.length;l++)t(u[l]);var f=s;a.push([0,"chunk-vendors"]),n()})({0:function(e,t,n){e.exports=n("56d7")},"56d7":function(e,t,n){"use strict";n.r(t);n("e260"),n("e6cf"),n("cca6"),n("a79d");var r=n("2b0e"),o=function(){var e=this,t=e.$createElement,n=e._self._c||t;return n("v-app",[n("v-main",[n("v-container",[n("v-card",{staticClass:"ma-4",staticStyle:{"backdrop-filter":"blur(12px)","border-radius":"14px"},attrs:{color:"rgba(255,255,255,0.3)",elevation:"8"}},[n("v-slide-y-transition",[e.wifiFailed?e._e():n("v-row",[n("lottie-animation",{attrs:{path:"assets/lotties/wifi-signal.json",loop:!0,autoPlay:!0,width:256,height:256}})],1)],1),n("v-slide-y-transition",[e.wifiFailed?e._e():n("v-row",{staticClass:"align-center justify-center"},[n("v-card-subtitle",[e._v("Establishing a secure connection to MARCo...")])],1)],1),n("v-slide-y-transition",[e.wifiFailed?n("v-alert",{attrs:{type:"error",icon:"mdi-wifi-off"}},[e._v("A secure connection could not be established. Double check your network signal. Internet connection is required.")]):e._e()],1)],1)],1)],1)],1)},a=[],i=n("1da1"),c=(n("96cf"),n("7926")),u=n("c8ec"),s={name:"App",components:{LottieAnimation:c["a"]},data:function(){return{wifiFailed:!1}},methods:{checkNetworkToLoad:function(){var e=Object(i["a"])(regeneratorRuntime.mark((function e(){var t;return regeneratorRuntime.wrap((function(e){while(1)switch(e.prev=e.next){case 0:return e.next=2,u["a"].getStatus();case 2:t=e.sent,t.connected?setTimeout((function(){window.location.href="https://app.marcohealthtech.com/?isreact=true"}),2800):this.wifiFailed=!0;case 4:case"end":return e.stop()}}),e,this)})));function t(){return e.apply(this,arguments)}return t}()},beforeMount:function(){var e=this;setTimeout((function(){e.checkNetworkToLoad()}),2500)}},l=s,f=n("2877"),p=n("6544"),d=n.n(p),h=n("0798"),v=n("7496"),b=n("b0af"),m=n("99d9"),w=n("a523"),y=n("f6c4"),g=n("0fd9"),j=n("0789"),k=Object(f["a"])(l,o,a,!1,null,null,null),O=k.exports;d()(k,{VAlert:h["a"],VApp:v["a"],VCard:b["a"],VCardSubtitle:m["a"],VContainer:w["a"],VMain:y["a"],VRow:g["a"],VSlideYTransition:j["c"]});var _=n("f309");r["a"].use(_["a"]);var x=new _["a"]({});r["a"].use(c["a"]),r["a"].config.productionTip=!1,new r["a"]({vuetify:x,render:function(e){return e(O)}}).$mount("#app")}});
//# sourceMappingURL=app.10731148.js.map