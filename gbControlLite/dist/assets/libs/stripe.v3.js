!(function (e) {
  function t(t) {
    for (var n, a, o = t[0], i = t[1], c = 0, u = []; c < o.length; c++)
      (a = o[c]),
        Object.prototype.hasOwnProperty.call(r, a) && r[a] && u.push(r[a][0]),
        (r[a] = 0);
    for (n in i) Object.prototype.hasOwnProperty.call(i, n) && (e[n] = i[n]);
    for (s && s(t); u.length; ) u.shift()();
  }
  var n = {},
    r = { 4: 0 };
  function a(t) {
    if (n[t]) return n[t].exports;
    var r = (n[t] = { i: t, l: !1, exports: {} });
    return e[t].call(r.exports, r, r.exports, a), (r.l = !0), r.exports;
  }
  (a.e = function (e) {
    var t = [],
      n = r[e];
    if (0 !== n)
      if (n) t.push(n[2]);
      else {
        var o = new Promise(function (t, a) {
          n = r[e] = [t, a];
        });
        t.push((n[2] = o));
        var i,
          c = document.createElement("script");
        (c.charset = "utf-8"),
          (c.timeout = 120),
          a.nc && c.setAttribute("nonce", a.nc),
          (c.src = (function (e) {
            return (
              a.p +
              "fingerprinted/js/" +
              ({
                1: "elements-afterpay-clearpay-message",
                2: "elements-afterpay-clearpay-modal",
                5: "trusted-types-checker",
              }[e] || e) +
              "-" +
              {
                1: "43949bbb29682459ccc92df13926d196",
                2: "1c5fe7622a7c084f85af6ee7387946b1",
                5: "9b6e874f149cc545c2c2335f8707fd1f",
              }[e] +
              ".js"
            );
          })(e));
        var s = new Error();
        i = function (t) {
          (c.onerror = c.onload = null), clearTimeout(u);
          var n = r[e];
          if (0 !== n) {
            if (n) {
              var a = t && ("load" === t.type ? "missing" : t.type),
                o = t && t.target && t.target.src;
              (s.message =
                "Loading chunk " + e + " failed.\n(" + a + ": " + o + ")"),
                (s.name = "ChunkLoadError"),
                (s.type = a),
                (s.request = o),
                n[1](s);
            }
            r[e] = void 0;
          }
        };
        var u = setTimeout(function () {
          i({ type: "timeout", target: c });
        }, 12e4);
        (c.onerror = c.onload = i), document.head.appendChild(c);
      }
    return Promise.all(t);
  }),
    (a.m = e),
    (a.c = n),
    (a.d = function (e, t, n) {
      a.o(e, t) || Object.defineProperty(e, t, { enumerable: !0, get: n });
    }),
    (a.r = function (e) {
      "undefined" != typeof Symbol &&
        Symbol.toStringTag &&
        Object.defineProperty(e, Symbol.toStringTag, { value: "Module" }),
        Object.defineProperty(e, "__esModule", { value: !0 });
    }),
    (a.t = function (e, t) {
      if ((1 & t && (e = a(e)), 8 & t)) return e;
      if (4 & t && "object" == typeof e && e && e.__esModule) return e;
      var n = Object.create(null);
      if (
        (a.r(n),
        Object.defineProperty(n, "default", { enumerable: !0, value: e }),
        2 & t && "string" != typeof e)
      )
        for (var r in e)
          a.d(
            n,
            r,
            function (t) {
              return e[t];
            }.bind(null, r)
          );
      return n;
    }),
    (a.n = function (e) {
      var t =
        e && e.__esModule
          ? function () {
              return e.default;
            }
          : function () {
              return e;
            };
      return a.d(t, "a", t), t;
    }),
    (a.o = function (e, t) {
      return Object.prototype.hasOwnProperty.call(e, t);
    }),
    (a.p = "https://js.stripe.com/v3/"),
    (a.oe = function (e) {
      throw (console.error(e), e);
    });
  var o = (window.__webpackStripeJSv3Jsonp =
      window.__webpackStripeJSv3Jsonp || []),
    i = o.push.bind(o);
  (o.push = t), (o = o.slice());
  for (var c = 0; c < o.length; c++) t(o[c]);
  var s = i;
  a((a.s = 39));
})([
  function (e, t, n) {
    "use strict";
    n.d(t, "a", function () {
      return o;
    });
    var r = n(4);
    function a(e, t) {
      var n = Object.keys(e);
      if (Object.getOwnPropertySymbols) {
        var r = Object.getOwnPropertySymbols(e);
        t &&
          (r = r.filter(function (t) {
            return Object.getOwnPropertyDescriptor(e, t).enumerable;
          })),
          n.push.apply(n, r);
      }
      return n;
    }
    function o(e) {
      for (var t = 1; t < arguments.length; t++) {
        var n = null != arguments[t] ? arguments[t] : {};
        t % 2
          ? a(Object(n), !0).forEach(function (t) {
              Object(r.a)(e, t, n[t]);
            })
          : Object.getOwnPropertyDescriptors
          ? Object.defineProperties(e, Object.getOwnPropertyDescriptors(n))
          : a(Object(n)).forEach(function (t) {
              Object.defineProperty(
                e,
                t,
                Object.getOwnPropertyDescriptor(n, t)
              );
            });
      }
      return e;
    }
  },
  function (e, t, n) {
    "use strict";
    var r = n(7),
      a = n(18),
      o = n(14),
      i = n(15),
      c = n(33),
      s = (function (e) {
        Object(o.a)(n, e);
        var t = Object(i.a)(n);
        function n(e) {
          var o;
          return (
            Object(r.a)(this, n),
            (o = t.call(this, e)),
            window.__stripeElementsController &&
              window.__stripeElementsController.reportIntegrationError(e),
            (o.name = "IntegrationError"),
            Object.defineProperty(Object(a.a)(o), "message", {
              value: o.message,
              enumerable: !0,
            }),
            o
          );
        }
        return n;
      })(Object(c.a)(Error));
    t.a = s;
  },
  function (e, t, n) {
    "use strict";
    var r = n(36),
      a = n.n(r),
      o = (n(42), window.Promise ? Promise : a.a);
    t.a = o;
  },
  function (e, t, n) {
    "use strict";
    n.d(t, "l", function () {
      return d;
    }),
      n.d(t, "i", function () {
        return m;
      }),
      n.d(t, "f", function () {
        return _;
      }),
      n.d(t, "c", function () {
        return a.a;
      }),
      n.d(t, "e", function () {
        return c;
      }),
      n.d(t, "d", function () {
        return s;
      }),
      n.d(t, "b", function () {
        return u.a;
      }),
      n.d(t, "k", function () {
        return p;
      }),
      n.d(t, "g", function () {
        return l;
      }),
      n.d(t, "h", function () {
        return h;
      }),
      n.d(t, "a", function () {
        return y;
      }),
      n.d(t, "j", function () {
        return b;
      });
    var r = n(19),
      a = n(12),
      o = n(6),
      i = function (e) {
        return "".concat("https://js.stripe.com/v3/").concat(e || "");
      },
      c = function (e) {
        switch (e) {
          case "ADDRESS_AUTOCOMPLETE":
            return i(
              "checkout-inner-address-autocomplete-b48ce6f194f8cd61e0264009e37a340b.html"
            );
          case "CARD_ELEMENT":
            return i(
              "elements-inner-card-2f5e7c889f46e2be08e2d0c331d61ca0.html"
            );
          case "CARD_LIGHT_ELEMENT":
            return i(
              "elements-inner-card-light-52da0f607f0c733c4bb7eabc423b9374.html"
            );
          case "CONTROLLER":
            return i("controller-70ea2a5c96149a66264eb04966b2a47e.html");
          case "METRICS_CONTROLLER":
            return i("m-outer-c19b0c166354f5488c8a7f316eaada90.html");
          case "PAYMENT_REQUEST_ELEMENT":
            return i(
              "elements-inner-payment-request-ff7b32ed5476d0b1c0c1cad528b01475.html"
            );
          case "PAYMENT_REQUEST_BROWSER":
            return i(
              "payment-request-inner-browser-a2a3fa90f45f0ab69166ae47b5192bed.html"
            );
          case "PAYMENT_REQUEST_GOOGLE_PAY":
            return i(
              "payment-request-inner-google-pay-a7f2b838478a2ef945af9c69365387eb.html"
            );
          case "IBAN_ELEMENT":
            return i(
              "elements-inner-iban-2e9c66348240abfe30c47c33df6163bb.html"
            );
          case "IDEAL_BANK_ELEMENT":
            return i(
              "elements-inner-ideal-bank-e9a70e6083944977c3a4b7650f30599d.html"
            );
          case "P24_BANK_ELEMENT":
            return i(
              "elements-inner-p24-bank-363a094b40206cb653aa6c6f446d348d.html"
            );
          case "AUTHORIZE_WITH_URL":
            return i(
              "authorize-with-url-inner-09cbbd7ac98de9b2d6c522b3ad82dbc1.html"
            );
          case "STRIPE_3DS2_CHALLENGE":
            return i(
              "three-ds-2-challenge-ba47c321d60c0a5475e5f36926fd2b65.html"
            );
          case "STRIPE_3DS2_FINGERPRINT":
            return i(
              "three-ds-2-fingerprint-e6817c86e9ac149fca5efaf0847bd1a3.html"
            );
          case "AU_BANK_ACCOUNT_ELEMENT":
            return i(
              "elements-inner-au-bank-account-e761621b68d325c4c2b47e61772e23c6.html"
            );
          case "FPX_BANK_ELEMENT":
            return i(
              "elements-inner-fpx-bank-2d5259087de9567123359d0c9e5d86ff.html"
            );
          case "LIGHTBOX_APP":
            return i("lightbox-inner-28141d699d14d970dfe97cb7be415f84.html");
          case "ISSUING_CARD_NUMBER_DISPLAY_ELEMENT":
            return i(
              "elements-inner-issuing-card-number-display-db9c8cec58fabeacf09601ab0b33b6ef.html"
            );
          case "ISSUING_CARD_CVC_DISPLAY_ELEMENT":
            return i(
              "elements-inner-issuing-card-cvc-display-f2ae828f5eb6996687a79acafa705bc9.html"
            );
          case "ISSUING_CARD_EXPIRY_DISPLAY_ELEMENT":
            return i(
              "elements-inner-issuing-card-expiry-display-8014bd6596af45f7f4ab7f92a90ddee7.html"
            );
          case "EPS_BANK_ELEMENT":
            return i(
              "elements-inner-eps-bank-22d300a74aa3efbea64c8eff90773542.html"
            );
          case "HCAPTCHA_APP":
            return i("hcaptcha-inner-8f3193b67a5d1b61679f70d10526dfad.html");
          case "NETBANKING_BANK_ELEMENT":
            return i(
              "elements-inner-netbanking-bank-0859b420ca843e4a60cfbb667cd96df5.html"
            );
          case "AFTERPAY_MESSAGE_MODAL_ELEMENT":
            return i(
              "elements-inner-afterpay-message-modal-69706a60ff45ff3f5f95d10ddedc4a91.html"
            );
          case "INSTANT_DEBITS_APP":
            return i(
              "instant-debits-app-2184fc40b2f7160fe0a1e5891038b31b.html"
            );
          case "AUTHENTICATION_ELEMENT":
            return i(
              "elements-inner-authentication-1adcc081af479d08e2b864eba8b46a23.html"
            );
          case "AUTHENTICATION_POPOVER_ELEMENT":
            return i(
              "elements-inner-authentication-popover-5e4ecbd5f781fa40688f3205f2de4f3e.html"
            );
          case "PAYMENT_ELEMENT":
            return i(
              "elements-inner-payment-91585c36fcf4147f023ced8ecfed152f.html"
            );
          case "LINKED_ACCOUNTS_INNER":
            return i(
              "linked-accounts-inner-de785d7aa6ca4f12eaf83747b7ab4ae3.html"
            );
          case "WECHAT_PAY_INNER":
            return i("wechat-pay-inner-e710620fac6fc76a9d2d50fe284e5295.html");
          case "SHIPPING_ADDRESS_ELEMENT":
            return i(
              "elements-inner-shipping-address-877172706fc87dbeb101cd80fe77bbc4.html"
            );
          default:
            return Object(o.a)(e);
        }
      },
      s = function (e) {
        var t = {
          frameborder: "0",
          allowTransparency: "true",
          scrolling: "no",
          allow: "payment *",
        };
        if ("PAYMENT_REQUEST_GOOGLE_PAY" === e) {
          (t.sandbox = [
            "allow-scripts",
            "allow-forms",
            "allow-popups",
            "allow-popups-to-escape-sandbox",
            "allow-same-origin",
          ].join(" ")),
            (t.referrerpolicy = "origin");
        }
        return t;
      },
      u = n(8),
      l = { PAYMENT_INTENT: "PAYMENT_INTENT", SETUP_INTENT: "SETUP_INTENT" },
      p = [
        u.a.card,
        u.a.cardNumber,
        u.a.cardExpiry,
        u.a.cardCvc,
        u.a.postalCode,
      ],
      d = "https://js.stripe.com/v3/",
      f = Object(r.d)(d),
      m = f ? f.origin : "",
      _ = "https://verify.stripe.com/",
      h = {
        family: "font-family",
        src: "src",
        unicodeRange: "unicode-range",
        style: "font-style",
        variant: "font-variant",
        stretch: "font-stretch",
        weight: "font-weight",
        display: "font-display",
      },
      y = Object.keys(h).reduce(function (e, t) {
        return (e[h[t]] = t), e;
      }, {}),
      b = [
        u.a.idealBank,
        u.a.p24Bank,
        u.a.netbankingBank,
        u.a.idealBankSecondary,
        u.a.p24BankSecondary,
        u.a.netbankingBankSecondary,
        u.a.fpxBank,
        u.a.fpxBankSecondary,
        u.a.epsBank,
        u.a.epsBankSecondary,
      ];
  },
  function (e, t, n) {
    "use strict";
    function r(e, t, n) {
      return (
        t in e
          ? Object.defineProperty(e, t, {
              value: n,
              enumerable: !0,
              configurable: !0,
              writable: !0,
            })
          : (e[t] = n),
        e
      );
    }
    n.d(t, "a", function () {
      return r;
    });
  },
  function (e, t, n) {
    "use strict";
    n.d(t, "a", function () {
      return i;
    });
    var r = n(28);
    var a = n(29),
      o = n(25);
    function i(e) {
      return (
        (function (e) {
          if (Array.isArray(e)) return Object(r.a)(e);
        })(e) ||
        Object(a.a)(e) ||
        Object(o.a)(e) ||
        (function () {
          throw new TypeError(
            "Invalid attempt to spread non-iterable instance.\nIn order to be iterable, non-array objects must have a [Symbol.iterator]() method."
          );
        })()
      );
    }
  },
  function (e, t, n) {
    "use strict";
    n.d(t, "a", function () {
      return r;
    });
    var r = function (e) {
      var t =
        arguments.length > 1 && void 0 !== arguments[1]
          ? arguments[1]
          : "absurd";
      throw new Error(t);
    };
  },
  function (e, t, n) {
    "use strict";
    function r(e, t) {
      if (!(e instanceof t))
        throw new TypeError("Cannot call a class as a function");
    }
    n.d(t, "a", function () {
      return r;
    });
  },
  function (e, t, n) {
    "use strict";
    var r = {
      card: "card",
      cardNumber: "cardNumber",
      cardExpiry: "cardExpiry",
      cardCvc: "cardCvc",
      postalCode: "postalCode",
      iban: "iban",
      idealBank: "idealBank",
      p24Bank: "p24Bank",
      paymentRequestButton: "paymentRequestButton",
      auBankAccount: "auBankAccount",
      fpxBank: "fpxBank",
      netbankingBank: "netbankingBank",
      epsBank: "epsBank",
      afterpayClearpayMessage: "afterpayClearpayMessage",
      authentication: "authentication",
      payment: "payment",
      shippingAddress: "shippingAddress",
      idealBankSecondary: "idealBankSecondary",
      p24BankSecondary: "p24BankSecondary",
      auBankAccountNumber: "auBankAccountNumber",
      auBsb: "auBsb",
      fpxBankSecondary: "fpxBankSecondary",
      netbankingBankSecondary: "netbankingBankSecondary",
      issuingCardNumberDisplay: "issuingCardNumberDisplay",
      issuingCardCvcDisplay: "issuingCardCvcDisplay",
      issuingCardExpiryDisplay: "issuingCardExpiryDisplay",
      epsBankSecondary: "epsBankSecondary",
      afterpayClearpayMessageModal: "afterpayClearpayMessageModal",
      authenticationPopover: "authenticationPopover",
    };
    t.a = r;
  },
  function (e, t, n) {
    "use strict";
    n.d(t, "a", function () {
      return s;
    });
    var r = n(7),
      a = n(11),
      o = Date.now
        ? function () {
            return Date.now();
          }
        : function () {
            return new Date().getTime();
          },
      i = o(),
      c =
        window.performance && window.performance.now
          ? function () {
              return window.performance.now();
            }
          : function () {
              return o() - i;
            },
      s = (function () {
        function e(t) {
          Object(r.a)(this, e), (this.timestampValue = null != t ? t : c());
        }
        return (
          Object(a.a)(
            e,
            [
              {
                key: "getAsPosixTime",
                value: function () {
                  return o() - this.getElapsedTime();
                },
              },
              {
                key: "getElapsedTime",
                value: function (e) {
                  return Math.round(
                    (e ? e.timestampValue : c()) - this.timestampValue
                  );
                },
              },
              {
                key: "valueOf",
                value: function () {
                  return Math.round(this.timestampValue);
                },
              },
            ],
            [
              {
                key: "fromPosixTime",
                value: function (t) {
                  return new e(t - o() + c());
                },
              },
            ]
          ),
          e
        );
      })();
  },
  function (e, t, n) {
    "use strict";
    n.d(t, "f", function () {
      return c;
    }),
      n.d(t, "d", function () {
        return s;
      }),
      n.d(t, "c", function () {
        return l;
      }),
      n.d(t, "e", function () {
        return p;
      }),
      n.d(t, "a", function () {
        return d;
      }),
      n.d(t, "g", function () {
        return f;
      }),
      n.d(t, "b", function () {
        return h;
      });
    var r = n(16),
      a = n(37),
      o = n.n(a),
      i = n(1),
      c = function (e, t) {
        var n = {};
        t.forEach(function (e) {
          var t = Object(r.a)(e, 2),
            a = t[0],
            o = t[1];
          a.split(/\s+/).forEach(function (e) {
            e && (n[e] = n[e] || o);
          });
        }),
          (e.className = o()(e.className, n));
      },
      s = function (e, t) {
        e.style.cssText = Object.keys(t)
          .map(function (e) {
            return "".concat(e, ": ").concat(t[e], " !important;");
          })
          .join(" ");
      },
      u = {
        border: "none",
        margin: "0",
        padding: "0",
        width: "1px",
        "min-width": "100%",
        overflow: "hidden",
        display: "block",
        visibility: "hidden",
        position: "fixed",
        height: "1px",
        "pointer-events": "none",
        "user-select": "none",
      },
      l = function (e) {
        s(e, u);
      },
      p = function (e) {
        try {
          return window.parent.frames[e];
        } catch (e) {
          return null;
        }
      },
      d = function () {
        if (!document.body)
          throw new i.a(
            "Stripe.js requires that your page has a <body> element."
          );
        return document.body;
      },
      f = function (e) {
        return requestAnimationFrame(function () {
          requestAnimationFrame(e);
        });
      },
      m = function (e, t) {
        return !!e.documentElement && e.documentElement.contains(t);
      },
      _ =
        "isConnected" in window.Node.prototype
          ? function (e, t) {
              return t.isConnected && t.ownerDocument === e;
            }
          : m,
      h = function (e, t) {
        return !m(e, t) && _(e, t);
      };
  },
  function (e, t, n) {
    "use strict";
    function r(e, t) {
      for (var n = 0; n < t.length; n++) {
        var r = t[n];
        (r.enumerable = r.enumerable || !1),
          (r.configurable = !0),
          "value" in r && (r.writable = !0),
          Object.defineProperty(e, r.key, r);
      }
    }
    function a(e, t, n) {
      return t && r(e.prototype, t), n && r(e, n), e;
    }
    n.d(t, "a", function () {
      return a;
    });
  },
  function (e, t, n) {
    "use strict";
    var r = {
      ADDRESS_AUTOCOMPLETE: "ADDRESS_AUTOCOMPLETE",
      CARD_ELEMENT: "CARD_ELEMENT",
      CARD_LIGHT_ELEMENT: "CARD_LIGHT_ELEMENT",
      CONTROLLER: "CONTROLLER",
      METRICS_CONTROLLER: "METRICS_CONTROLLER",
      PAYMENT_REQUEST_ELEMENT: "PAYMENT_REQUEST_ELEMENT",
      PAYMENT_REQUEST_BROWSER: "PAYMENT_REQUEST_BROWSER",
      PAYMENT_REQUEST_GOOGLE_PAY: "PAYMENT_REQUEST_GOOGLE_PAY",
      IBAN_ELEMENT: "IBAN_ELEMENT",
      IDEAL_BANK_ELEMENT: "IDEAL_BANK_ELEMENT",
      P24_BANK_ELEMENT: "P24_BANK_ELEMENT",
      AUTHORIZE_WITH_URL: "AUTHORIZE_WITH_URL",
      STRIPE_3DS2_CHALLENGE: "STRIPE_3DS2_CHALLENGE",
      STRIPE_3DS2_FINGERPRINT: "STRIPE_3DS2_FINGERPRINT",
      AU_BANK_ACCOUNT_ELEMENT: "AU_BANK_ACCOUNT_ELEMENT",
      FPX_BANK_ELEMENT: "FPX_BANK_ELEMENT",
      LIGHTBOX_APP: "LIGHTBOX_APP",
      ISSUING_CARD_NUMBER_DISPLAY_ELEMENT:
        "ISSUING_CARD_NUMBER_DISPLAY_ELEMENT",
      ISSUING_CARD_CVC_DISPLAY_ELEMENT: "ISSUING_CARD_CVC_DISPLAY_ELEMENT",
      ISSUING_CARD_EXPIRY_DISPLAY_ELEMENT:
        "ISSUING_CARD_EXPIRY_DISPLAY_ELEMENT",
      EPS_BANK_ELEMENT: "EPS_BANK_ELEMENT",
      HCAPTCHA_APP: "HCAPTCHA_APP",
      NETBANKING_BANK_ELEMENT: "NETBANKING_BANK_ELEMENT",
      AFTERPAY_MESSAGE_MODAL_ELEMENT: "AFTERPAY_MESSAGE_MODAL_ELEMENT",
      INSTANT_DEBITS_APP: "INSTANT_DEBITS_APP",
      AUTHENTICATION_ELEMENT: "AUTHENTICATION_ELEMENT",
      AUTHENTICATION_POPOVER_ELEMENT: "AUTHENTICATION_POPOVER_ELEMENT",
      PAYMENT_ELEMENT: "PAYMENT_ELEMENT",
      LINKED_ACCOUNTS_INNER: "LINKED_ACCOUNTS_INNER",
      WECHAT_PAY_INNER: "WECHAT_PAY_INNER",
      SHIPPING_ADDRESS_ELEMENT: "SHIPPING_ADDRESS_ELEMENT",
    };
    t.a = r;
  },
  function (e, t, n) {
    "use strict";
    n.d(t, "a", function () {
      return o;
    }),
      n.d(t, "b", function () {
        return i;
      }),
      n.d(t, "c", function () {
        return s;
      }),
      n.d(t, "e", function () {
        return u;
      }),
      n.d(t, "f", function () {
        return l;
      }),
      n.d(t, "d", function () {
        return p;
      });
    var r = n(2),
      a = n(9),
      o = function (e, t) {
        for (var n = 0; n < e.length; n++) if (t(e[n])) return e[n];
      },
      i = function (e, t) {
        for (var n = 0; n < e.length; n++) if (t(e[n])) return n;
        return -1;
      },
      c = "[object Object]",
      s = function e(t, n) {
        if ("object" != typeof t || "object" != typeof n) return t === n;
        if (null === t || null === n) return t === n;
        var r = Array.isArray(t);
        if (r !== Array.isArray(n)) return !1;
        var a = Object.prototype.toString.call(t) === c;
        if (a !== (Object.prototype.toString.call(n) === c)) return !1;
        if (!a && !r) return !1;
        var o = Object.keys(t),
          i = Object.keys(n);
        if (o.length !== i.length) return !1;
        for (var s = {}, u = 0; u < o.length; u++) s[o[u]] = !0;
        for (var l = 0; l < i.length; l++) s[i[l]] = !0;
        var p = Object.keys(s);
        if (p.length !== o.length) return !1;
        var d = t,
          f = n;
        return p.every(function (t) {
          return e(d[t], f[t]);
        });
      },
      u = function (e, t) {
        for (var n = {}, r = 0; r < t.length; r++) n[t[r]] = !0;
        for (var a = [], o = 0; o < e.length; o++) n[e[o]] && a.push(e[o]);
        return a;
      },
      l = function (e) {
        for (var t = 0, n = 0; n < e.length; n++) t += e[n];
        return t;
      },
      p = function (e, t) {
        var n = 0,
          o = function r(o) {
            for (var i = new a.a(); n < e.length && i.getElapsedTime() < 50; )
              t(e[n]), n++;
            n === e.length
              ? o()
              : setTimeout(function () {
                  return r(o);
                });
          };
        return new r.a(function (e) {
          return o(e);
        });
      };
  },
  function (e, t, n) {
    "use strict";
    n.d(t, "a", function () {
      return a;
    });
    var r = n(26);
    function a(e, t) {
      if ("function" != typeof t && null !== t)
        throw new TypeError(
          "Super expression must either be null or a function"
        );
      (e.prototype = Object.create(t && t.prototype, {
        constructor: { value: e, writable: !0, configurable: !0 },
      })),
        t && Object(r.a)(e, t);
    }
  },
  function (e, t, n) {
    "use strict";
    n.d(t, "a", function () {
      return s;
    });
    var r = n(17),
      a = n(30),
      o = n(22),
      i = n(18);
    function c(e, t) {
      return !t || ("object" !== Object(o.a)(t) && "function" != typeof t)
        ? Object(i.a)(e)
        : t;
    }
    function s(e) {
      var t = Object(a.a)();
      return function () {
        var n,
          a = Object(r.a)(e);
        if (t) {
          var o = Object(r.a)(this).constructor;
          n = Reflect.construct(a, arguments, o);
        } else n = a.apply(this, arguments);
        return c(this, n);
      };
    }
  },
  function (e, t, n) {
    "use strict";
    n.d(t, "a", function () {
      return i;
    });
    var r = n(31);
    var a = n(25),
      o = n(32);
    function i(e, t) {
      return (
        Object(r.a)(e) ||
        (function (e, t) {
          if ("undefined" != typeof Symbol && Symbol.iterator in Object(e)) {
            var n = [],
              r = !0,
              a = !1,
              o = void 0;
            try {
              for (
                var i, c = e[Symbol.iterator]();
                !(r = (i = c.next()).done) &&
                (n.push(i.value), !t || n.length !== t);
                r = !0
              );
            } catch (e) {
              (a = !0), (o = e);
            } finally {
              try {
                r || null == c.return || c.return();
              } finally {
                if (a) throw o;
              }
            }
            return n;
          }
        })(e, t) ||
        Object(a.a)(e, t) ||
        Object(o.a)()
      );
    }
  },
  function (e, t, n) {
    "use strict";
    function r(e) {
      return (r = Object.setPrototypeOf
        ? Object.getPrototypeOf
        : function (e) {
            return e.__proto__ || Object.getPrototypeOf(e);
          })(e);
    }
    n.d(t, "a", function () {
      return r;
    });
  },
  function (e, t, n) {
    "use strict";
    function r(e) {
      if (void 0 === e)
        throw new ReferenceError(
          "this hasn't been initialised - super() hasn't been called"
        );
      return e;
    }
    n.d(t, "a", function () {
      return r;
    });
  },
  function (e, t, n) {
    "use strict";
    n.d(t, "b", function () {
      return a;
    }),
      n.d(t, "a", function () {
        return o;
      }),
      n.d(t, "d", function () {
        return i;
      }),
      n.d(t, "c", function () {
        return c;
      });
    var r = /^(http(s)?):\/\//,
      a = function (e) {
        return r.test(e);
      },
      o = function (e) {
        var t = e.match(r);
        return t && t.length ? t[1] : null;
      },
      i = function (e) {
        if (!a(e)) return null;
        var t = document.createElement("a");
        t.href = e;
        var n = t.protocol,
          r = t.host,
          o = t.pathname,
          i = /:80$/,
          c = /:443$/;
        return (
          "http:" === n && i.test(r)
            ? (r = r.replace(i, ""))
            : "https:" === n && c.test(r) && (r = r.replace(c, "")),
          {
            host: r,
            protocol: n,
            origin: "".concat(n, "//").concat(r),
            path: o,
          }
        );
      },
      c = function (e, t) {
        if ("/" === t[0]) {
          var n = i(e);
          return n ? "".concat(n.origin).concat(t) : t;
        }
        var r = e.replace(/\/[^/]*$/, "/");
        return "".concat(r).concat(t);
      };
  },
  function (e, t, n) {
    "use strict";
    n.d(t, "b", function () {
      return a;
    }),
      n.d(t, "a", function () {
        return o;
      }),
      n.d(t, "c", function () {
        return i;
      });
    var r = n(1),
      a = function (e) {
        var t = {},
          n = {};
        return function (r) {
          var a = "_".concat(r);
          if ("string" == typeof r && void 0 !== t[a]) return t[a];
          if ("number" == typeof r && void 0 !== n[a]) return n[a];
          var o = e(r);
          return (
            "string" == typeof r && (t[a] = o),
            "number" == typeof r && (n[a] = o),
            o
          );
        };
      },
      o = function (e, t) {
        var n = !1;
        return function () {
          if (n) throw new r.a(t);
          n = !0;
          try {
            return e.apply(void 0, arguments).then(
              function (e) {
                return (n = !1), e;
              },
              function (e) {
                throw ((n = !1), e);
              }
            );
          } catch (e) {
            throw ((n = !1), e);
          }
        };
      },
      i = function (e) {
        var t = e;
        return function () {
          t && (t.apply(void 0, arguments), (t = null));
        };
      };
  },
  function (e, t, n) {
    "use strict";
    n.d(t, "a", function () {
      return a;
    }),
      n.d(t, "b", function () {
        return o;
      }),
      n.d(t, "c", function () {
        return i;
      });
    var r = n(19),
      a = function (e, t) {
        var n = Object(r.d)(e),
          a = Object(r.d)(t);
        return !(!n || !a) && n.origin === a.origin;
      },
      o = function (e) {
        return a(e, "https://js.stripe.com/v3/");
      },
      i = function (e) {
        return (
          o(e) ||
          (function (e) {
            var t = Object(r.d)(e),
              n = t ? t.host : "";
            return "stripe.com" === n || !!n.match(/\.stripe\.(com|me)$/);
          })(e)
        );
      };
  },
  function (e, t, n) {
    "use strict";
    function r(e) {
      return (r =
        "function" == typeof Symbol && "symbol" == typeof Symbol.iterator
          ? function (e) {
              return typeof e;
            }
          : function (e) {
              return e &&
                "function" == typeof Symbol &&
                e.constructor === Symbol &&
                e !== Symbol.prototype
                ? "symbol"
                : typeof e;
            })(e);
    }
    n.d(t, "a", function () {
      return r;
    });
  },
  function (e, t, n) {
    "use strict";
    var r = n(5);
    t.a = function e(t, n) {
      var a = [];
      return (
        Object.keys(t).forEach(function (o) {
          var i = t[o],
            c = n ? "".concat(n, "[").concat(o, "]") : o;
          if (i && "object" == typeof i) {
            var s = e(i, c);
            "" !== s && (a = [].concat(Object(r.a)(a), [s]));
          } else null != i && (a = [].concat(Object(r.a)(a), ["".concat(c, "=").concat(encodeURIComponent(String(i)))]));
        }),
        a.join("&").replace(/%20/g, "+")
      );
    };
  },
  function (e, t, n) {
    "use strict";
    n.d(t, "b", function () {
      return c;
    }),
      n.d(t, "c", function () {
        return s;
      }),
      n.d(t, "a", function () {
        return u;
      });
    var r = n(20),
      a = n(13),
      o = n(27),
      i = function () {
        return Array.prototype.slice
          .call(
            document.querySelectorAll(
              "a[href], area[href], input:not([disabled]),\n  select:not([disabled]), textarea:not([disabled]), button:not([disabled]),\n  object, embed, *[tabindex], *[contenteditable]"
            )
          )
          .filter(function (e) {
            var t = e.getAttribute("tabindex"),
              n = !t || parseInt(t, 10) >= 0,
              r = e.getBoundingClientRect(),
              a = Object(o.a)(e),
              i =
                r.width > 0 &&
                r.height > 0 &&
                a &&
                "hidden" !== a.getPropertyValue("visibility");
            return n && i;
          });
      },
      c = function (e, t) {
        var n = i();
        return n[
          Object(a.b)(n, function (t) {
            return t === e || e.contains(t);
          }) + ("previous" === t ? -1 : 1)
        ];
      },
      s = function (e, t) {
        return e.then(function () {
          return Object(a.d)(t, function (e) {
            var t = e.element,
              n = e.tabIndex;
            "" === n
              ? t.removeAttribute("tabindex")
              : t.setAttribute("tabindex", n);
          });
        });
      },
      u = function (e) {
        var t = [],
          n = Object(a.d)(document.querySelectorAll("*"), function (n) {
            var r = n.getAttribute("tabindex") || "";
            e !== n && (n.tabIndex = -1), t.push({ element: n, tabIndex: r });
          }),
          o = Object(r.c)(function () {
            s(n, t);
          });
        return { lockedPromise: n, lockedElements: t, restoreFocus: o };
      };
  },
  function (e, t, n) {
    "use strict";
    n.d(t, "a", function () {
      return a;
    });
    var r = n(28);
    function a(e, t) {
      if (e) {
        if ("string" == typeof e) return Object(r.a)(e, t);
        var n = Object.prototype.toString.call(e).slice(8, -1);
        return (
          "Object" === n && e.constructor && (n = e.constructor.name),
          "Map" === n || "Set" === n
            ? Array.from(e)
            : "Arguments" === n ||
              /^(?:Ui|I)nt(?:8|16|32)(?:Clamped)?Array$/.test(n)
            ? Object(r.a)(e, t)
            : void 0
        );
      }
    }
  },
  function (e, t, n) {
    "use strict";
    function r(e, t) {
      return (r =
        Object.setPrototypeOf ||
        function (e, t) {
          return (e.__proto__ = t), e;
        })(e, t);
    }
    n.d(t, "a", function () {
      return r;
    });
  },
  function (e, t, n) {
    "use strict";
    t.a = function (e, t) {
      return e ? window.getComputedStyle(e, t) : null;
    };
  },
  function (e, t, n) {
    "use strict";
    function r(e, t) {
      (null == t || t > e.length) && (t = e.length);
      for (var n = 0, r = new Array(t); n < t; n++) r[n] = e[n];
      return r;
    }
    n.d(t, "a", function () {
      return r;
    });
  },
  function (e, t, n) {
    "use strict";
    function r(e) {
      if ("undefined" != typeof Symbol && Symbol.iterator in Object(e))
        return Array.from(e);
    }
    n.d(t, "a", function () {
      return r;
    });
  },
  function (e, t, n) {
    "use strict";
    function r() {
      if ("undefined" == typeof Reflect || !Reflect.construct) return !1;
      if (Reflect.construct.sham) return !1;
      if ("function" == typeof Proxy) return !0;
      try {
        return (
          Date.prototype.toString.call(
            Reflect.construct(Date, [], function () {})
          ),
          !0
        );
      } catch (e) {
        return !1;
      }
    }
    n.d(t, "a", function () {
      return r;
    });
  },
  function (e, t, n) {
    "use strict";
    function r(e) {
      if (Array.isArray(e)) return e;
    }
    n.d(t, "a", function () {
      return r;
    });
  },
  function (e, t, n) {
    "use strict";
    function r() {
      throw new TypeError(
        "Invalid attempt to destructure non-iterable instance.\nIn order to be iterable, non-array objects must have a [Symbol.iterator]() method."
      );
    }
    n.d(t, "a", function () {
      return r;
    });
  },
  function (e, t, n) {
    "use strict";
    n.d(t, "a", function () {
      return c;
    });
    var r = n(17),
      a = n(26);
    var o = n(30);
    function i(e, t, n) {
      return (i = Object(o.a)()
        ? Reflect.construct
        : function (e, t, n) {
            var r = [null];
            r.push.apply(r, t);
            var o = new (Function.bind.apply(e, r))();
            return n && Object(a.a)(o, n.prototype), o;
          }).apply(null, arguments);
    }
    function c(e) {
      var t = "function" == typeof Map ? new Map() : void 0;
      return (c = function (e) {
        if (
          null === e ||
          ((n = e), -1 === Function.toString.call(n).indexOf("[native code]"))
        )
          return e;
        var n;
        if ("function" != typeof e)
          throw new TypeError(
            "Super expression must either be null or a function"
          );
        if (void 0 !== t) {
          if (t.has(e)) return t.get(e);
          t.set(e, o);
        }
        function o() {
          return i(e, arguments, Object(r.a)(this).constructor);
        }
        return (
          (o.prototype = Object.create(e.prototype, {
            constructor: {
              value: o,
              enumerable: !1,
              writable: !0,
              configurable: !0,
            },
          })),
          Object(a.a)(o, e)
        );
      })(e);
    }
  },
  function (e, t, n) {
    "use strict";
    var r = n(40);
    function a() {}
    var o = null,
      i = {};
    function c(e) {
      if ("object" != typeof this)
        throw new TypeError("Promises must be constructed via new");
      if ("function" != typeof e) throw new TypeError("not a function");
      (this._45 = 0),
        (this._81 = 0),
        (this._65 = null),
        (this._54 = null),
        e !== a && f(e, this);
    }
    function s(e, t) {
      for (; 3 === e._81; ) e = e._65;
      if ((c._10 && c._10(e), 0 === e._81))
        return 0 === e._45
          ? ((e._45 = 1), void (e._54 = t))
          : 1 === e._45
          ? ((e._45 = 2), void (e._54 = [e._54, t]))
          : void e._54.push(t);
      !(function (e, t) {
        r(function () {
          var n = 1 === e._81 ? t.onFulfilled : t.onRejected;
          if (null !== n) {
            var r = (function (e, t) {
              try {
                return e(t);
              } catch (e) {
                return (o = e), i;
              }
            })(n, e._65);
            r === i ? l(t.promise, o) : u(t.promise, r);
          } else 1 === e._81 ? u(t.promise, e._65) : l(t.promise, e._65);
        });
      })(e, t);
    }
    function u(e, t) {
      if (t === e)
        return l(e, new TypeError("A promise cannot be resolved with itself."));
      if (t && ("object" == typeof t || "function" == typeof t)) {
        var n = (function (e) {
          try {
            return e.then;
          } catch (e) {
            return (o = e), i;
          }
        })(t);
        if (n === i) return l(e, o);
        if (n === e.then && t instanceof c)
          return (e._81 = 3), (e._65 = t), void p(e);
        if ("function" == typeof n) return void f(n.bind(t), e);
      }
      (e._81 = 1), (e._65 = t), p(e);
    }
    function l(e, t) {
      (e._81 = 2), (e._65 = t), c._97 && c._97(e, t), p(e);
    }
    function p(e) {
      if ((1 === e._45 && (s(e, e._54), (e._54 = null)), 2 === e._45)) {
        for (var t = 0; t < e._54.length; t++) s(e, e._54[t]);
        e._54 = null;
      }
    }
    function d(e, t, n) {
      (this.onFulfilled = "function" == typeof e ? e : null),
        (this.onRejected = "function" == typeof t ? t : null),
        (this.promise = n);
    }
    function f(e, t) {
      var n = !1,
        r = (function (e, t, n) {
          try {
            e(t, n);
          } catch (e) {
            return (o = e), i;
          }
        })(
          e,
          function (e) {
            n || ((n = !0), u(t, e));
          },
          function (e) {
            n || ((n = !0), l(t, e));
          }
        );
      n || r !== i || ((n = !0), l(t, o));
    }
    (e.exports = c),
      (c._10 = null),
      (c._97 = null),
      (c._61 = a),
      (c.prototype.then = function (e, t) {
        if (this.constructor !== c)
          return (function (e, t, n) {
            return new e.constructor(function (r, o) {
              var i = new c(a);
              i.then(r, o), s(e, new d(t, n, i));
            });
          })(this, e, t);
        var n = new c(a);
        return s(this, new d(e, t, n)), n;
      });
  },
  function (e, t, n) {
    "use strict";
    n.d(t, "a", function () {
      return o;
    });
    var r = n(10),
      a = n(20),
      o = function () {
        var e = Object(r.a)(),
          t = e.style.overflow;
        e.style.overflow = "hidden";
        var n = { passive: !1 },
          o = function (e) {
            return e.preventDefault();
          },
          i = function () {};
        return (
          window.addEventListener("touchmove", i, n),
          e.addEventListener("touchstart", i, n),
          e.addEventListener("touchmove", o, n),
          Object(a.c)(function () {
            (e.style.overflow = t || ""),
              window.removeEventListener("touchmove", i, n),
              e.removeEventListener("touchstart", i, n),
              e.removeEventListener("touchmove", o, n);
          })
        );
      };
  },
  function (e, t, n) {
    "use strict";
    var r = n(34);
    e.exports = r;
    var a = l(!0),
      o = l(!1),
      i = l(null),
      c = l(void 0),
      s = l(0),
      u = l("");
    function l(e) {
      var t = new r(r._61);
      return (t._81 = 1), (t._65 = e), t;
    }
    (r.resolve = function (e) {
      if (e instanceof r) return e;
      if (null === e) return i;
      if (void 0 === e) return c;
      if (!0 === e) return a;
      if (!1 === e) return o;
      if (0 === e) return s;
      if ("" === e) return u;
      if ("object" == typeof e || "function" == typeof e)
        try {
          var t = e.then;
          if ("function" == typeof t) return new r(t.bind(e));
        } catch (e) {
          return new r(function (t, n) {
            n(e);
          });
        }
      return l(e);
    }),
      (r.all = function (e) {
        var t = Array.prototype.slice.call(e);
        return new r(function (e, n) {
          if (0 === t.length) return e([]);
          var a = t.length;
          function o(i, c) {
            if (c && ("object" == typeof c || "function" == typeof c)) {
              if (c instanceof r && c.then === r.prototype.then) {
                for (; 3 === c._81; ) c = c._65;
                return 1 === c._81
                  ? o(i, c._65)
                  : (2 === c._81 && n(c._65),
                    void c.then(function (e) {
                      o(i, e);
                    }, n));
              }
              var s = c.then;
              if ("function" == typeof s)
                return void new r(s.bind(c)).then(function (e) {
                  o(i, e);
                }, n);
            }
            (t[i] = c), 0 == --a && e(t);
          }
          for (var i = 0; i < t.length; i++) o(i, t[i]);
        });
      }),
      (r.reject = function (e) {
        return new r(function (t, n) {
          n(e);
        });
      }),
      (r.race = function (e) {
        return new r(function (t, n) {
          e.forEach(function (e) {
            r.resolve(e).then(t, n);
          });
        });
      }),
      (r.prototype.catch = function (e) {
        return this.then(null, e);
      });
  },
  function (e, t, n) {
    var r;
    !(function () {
      "use strict";
      var n = (function () {
        function e() {}
        function t(e, t) {
          for (var n = t.length, r = 0; r < n; ++r) a(e, t[r]);
        }
        e.prototype = Object.create(null);
        var n = {}.hasOwnProperty;
        var r = /\s+/;
        function a(e, a) {
          if (a) {
            var o = typeof a;
            "string" === o
              ? (function (e, t) {
                  for (var n = t.split(r), a = n.length, o = 0; o < a; ++o)
                    e[n[o]] = !0;
                })(e, a)
              : Array.isArray(a)
              ? t(e, a)
              : "object" === o
              ? (function (e, t) {
                  for (var r in t) n.call(t, r) && (e[r] = !!t[r]);
                })(e, a)
              : "number" === o &&
                (function (e, t) {
                  e[t] = !0;
                })(e, a);
          }
        }
        return function () {
          for (var n = arguments.length, r = Array(n), a = 0; a < n; a++)
            r[a] = arguments[a];
          var o = new e();
          t(o, r);
          var i = [];
          for (var c in o) o[c] && i.push(c);
          return i.join(" ");
        };
      })();
      e.exports
        ? ((n.default = n), (e.exports = n))
        : void 0 ===
            (r = function () {
              return n;
            }.apply(t, [])) || (e.exports = r);
    })();
  },
  function (e, t) {
    e.exports = function (e) {
      var t = e
        .split("")
        .map(function (e) {
          return e.charCodeAt(0);
        })
        .reduce(function (e, t) {
          return ((e << 5) - e + t) & ((e << 5) - e + t);
        }, 0)
        .toString();
      return "_".concat(t.replace(/[-.]/g, "_"));
    };
  },
  function (e, t, n) {
    e.exports = n(48);
  },
  function (e, t, n) {
    "use strict";
    (function (t) {
      function n(e) {
        a.length || (r(), !0), (a[a.length] = e);
      }
      e.exports = n;
      var r,
        a = [],
        o = 0;
      function i() {
        for (; o < a.length; ) {
          var e = o;
          if (((o += 1), a[e].call(), o > 1024)) {
            for (var t = 0, n = a.length - o; t < n; t++) a[t] = a[t + o];
            (a.length -= o), (o = 0);
          }
        }
        (a.length = 0), (o = 0), !1;
      }
      var c,
        s,
        u,
        l = void 0 !== t ? t : self,
        p = l.MutationObserver || l.WebKitMutationObserver;
      function d(e) {
        return function () {
          var t = setTimeout(r, 0),
            n = setInterval(r, 50);
          function r() {
            clearTimeout(t), clearInterval(n), e();
          }
        };
      }
      "function" == typeof p
        ? ((c = 1),
          (s = new p(i)),
          (u = document.createTextNode("")),
          s.observe(u, { characterData: !0 }),
          (r = function () {
            (c = -c), (u.data = c);
          }))
        : (r = d(i)),
        (n.requestFlush = r),
        (n.makeRequestCallFromTimer = d);
    }).call(this, n(41));
  },
  function (e, t) {
    var n;
    n = (function () {
      return this;
    })();
    try {
      n = n || new Function("return this")();
    } catch (e) {
      "object" == typeof window && (n = window);
    }
    e.exports = n;
  },
  function (e, t, n) {
    "use strict";
    var r = n(34);
    (e.exports = r),
      (r.prototype.finally = function (e) {
        return this.then(
          function (t) {
            return r.resolve(e()).then(function () {
              return t;
            });
          },
          function (t) {
            return r.resolve(e()).then(function () {
              throw t;
            });
          }
        );
      });
  },
  function (e, t) {},
  ,
  ,
  ,
  ,
  function (e, t, n) {
    "use strict";
    n.r(t);
    var r = n(0),
      a = n(7),
      o = n(11),
      i = n(5),
      c = n(4);
    function s(e, t) {
      if (null == e) return {};
      var n,
        r,
        a = (function (e, t) {
          if (null == e) return {};
          var n,
            r,
            a = {},
            o = Object.keys(e);
          for (r = 0; r < o.length; r++)
            (n = o[r]), t.indexOf(n) >= 0 || (a[n] = e[n]);
          return a;
        })(e, t);
      if (Object.getOwnPropertySymbols) {
        var o = Object.getOwnPropertySymbols(e);
        for (r = 0; r < o.length; r++)
          (n = o[r]),
            t.indexOf(n) >= 0 ||
              (Object.prototype.propertyIsEnumerable.call(e, n) &&
                (a[n] = e[n]));
      }
      return a;
    }
    var u = n(1),
      l = n(6),
      p = n(13),
      d = [
        "aed",
        "afn",
        "all",
        "amd",
        "ang",
        "aoa",
        "ars",
        "aud",
        "awg",
        "azn",
        "bam",
        "bbd",
        "bdt",
        "bgn",
        "bhd",
        "bif",
        "bmd",
        "bnd",
        "bob",
        "brl",
        "bsd",
        "btn",
        "bwp",
        "byr",
        "bzd",
        "cad",
        "cdf",
        "chf",
        "clf",
        "clp",
        "cny",
        "cop",
        "crc",
        "cuc",
        "cup",
        "cve",
        "czk",
        "djf",
        "dkk",
        "dop",
        "dzd",
        "egp",
        "ern",
        "etb",
        "eur",
        "fjd",
        "fkp",
        "gbp",
        "gel",
        "ghs",
        "gip",
        "gmd",
        "gnf",
        "gtq",
        "gyd",
        "hkd",
        "hnl",
        "hrk",
        "htg",
        "huf",
        "idr",
        "ils",
        "inr",
        "iqd",
        "irr",
        "isk",
        "jmd",
        "jod",
        "jpy",
        "kes",
        "kgs",
        "khr",
        "kmf",
        "kpw",
        "krw",
        "kwd",
        "kyd",
        "kzt",
        "lak",
        "lbp",
        "lkr",
        "lrd",
        "lsl",
        "ltl",
        "lvl",
        "lyd",
        "mad",
        "mdl",
        "mga",
        "mkd",
        "mmk",
        "mnt",
        "mop",
        "mro",
        "mur",
        "mvr",
        "mwk",
        "mxn",
        "myr",
        "mzn",
        "nad",
        "ngn",
        "nio",
        "nok",
        "npr",
        "nzd",
        "omr",
        "pab",
        "pen",
        "pgk",
        "php",
        "pkr",
        "pln",
        "pyg",
        "qar",
        "ron",
        "rsd",
        "rub",
        "rwf",
        "sar",
        "sbd",
        "scr",
        "sdg",
        "sek",
        "sgd",
        "shp",
        "skk",
        "sll",
        "sos",
        "srd",
        "ssp",
        "std",
        "svc",
        "syp",
        "szl",
        "thb",
        "tjs",
        "tmt",
        "tnd",
        "top",
        "try",
        "ttd",
        "twd",
        "tzs",
        "uah",
        "ugx",
        "usd",
        "uyu",
        "uzs",
        "vef",
        "vnd",
        "vuv",
        "wst",
        "xaf",
        "xag",
        "xau",
        "xcd",
        "xdr",
        "xof",
        "xpf",
        "yer",
        "zar",
        "zmk",
        "zmw",
        "btc",
        "jep",
        "eek",
        "ghc",
        "mtl",
        "tmm",
        "yen",
        "zwd",
        "zwl",
        "zwn",
        "zwr",
      ],
      f = {
        AE: "AE",
        AT: "AT",
        AU: "AU",
        BE: "BE",
        BG: "BG",
        BR: "BR",
        CA: "CA",
        CH: "CH",
        CI: "CI",
        CR: "CR",
        CY: "CY",
        CZ: "CZ",
        DE: "DE",
        DK: "DK",
        DO: "DO",
        EE: "EE",
        ES: "ES",
        FI: "FI",
        FR: "FR",
        GB: "GB",
        GI: "GI",
        GR: "GR",
        GT: "GT",
        HK: "HK",
        HU: "HU",
        ID: "ID",
        IE: "IE",
        IN: "IN",
        IT: "IT",
        JP: "JP",
        LI: "LI",
        LT: "LT",
        LU: "LU",
        LV: "LV",
        MT: "MT",
        MX: "MX",
        MY: "MY",
        NL: "NL",
        NO: "NO",
        NZ: "NZ",
        PE: "PE",
        PH: "PH",
        PL: "PL",
        PT: "PT",
        RO: "RO",
        SE: "SE",
        SG: "SG",
        SI: "SI",
        SK: "SK",
        SN: "SN",
        TH: "TH",
        TT: "TT",
        US: "US",
        UY: "UY",
      },
      m = Object.keys(f),
      _ = {
        applePay: "applePay",
        googlePay: "googlePay",
        browserCard: "browserCard",
      },
      h = function (e, t) {
        return e.indexOf(t) >= 0;
      },
      y = Object.keys(_),
      b = { live: "live", test: "test", unknown: "unknown" },
      v = function (e) {
        return /^pk_test_/.test(e)
          ? b.test
          : /^pk_live_/.test(e)
          ? b.live
          : b.unknown;
      },
      g = n(19),
      E = function (e, t, n) {
        var r = n.path.reduce(function (e, t, n) {
          return 0 === n
            ? t
            : 0 === t.indexOf(".")
            ? "".concat(e, '["').concat(t, '"]')
            : "".concat(e, ".").concat(t);
        }, "");
        return "Invalid value for "
          .concat(n.label, ": ")
          .concat(r || "value", " should be ")
          .concat(e, ". You specified: ")
          .concat(t, ".");
      },
      w = function (e) {
        var t =
          arguments.length > 1 && void 0 !== arguments[1] ? arguments[1] : [];
        return { type: "valid", value: e, warnings: t };
      },
      O = function (e) {
        return { error: e, errorType: "full", type: "error" };
      },
      k = function (e, t, n) {
        var r = new u.a(E(e, t, n));
        return O(r);
      },
      j = function (e, t, n) {
        return {
          expected: e,
          actual: String(t),
          options: n,
          errorType: "mismatch",
          type: "error",
        };
      },
      P = function (e, t) {
        return Object(r.a)(
          Object(r.a)({}, e),
          {},
          { path: [].concat(Object(i.a)(e.path), [t]) }
        );
      },
      S = function (e) {
        return function (t, n) {
          return void 0 === t ? w(t) : e(t, n);
        };
      },
      T = function (e, t) {
        return function (n, r) {
          var a = function (e) {
              var t = e.options.path.join(".") || "value";
              return {
                error: "".concat(t, " should be ").concat(e.expected),
                actual: "".concat(t, " as ").concat(e.actual),
              };
            },
            o = function (e, t, n) {
              return O(
                new u.a(
                  "Invalid value for "
                    .concat(e, ": ")
                    .concat(t, ". You specified ")
                    .concat(n, ".")
                )
              );
            },
            i = e(n, r),
            c = t(n, r);
          if ("error" === i.type && "error" === c.type) {
            if ("mismatch" === i.errorType && "mismatch" === c.errorType) {
              var s = a(i),
                l = s.error,
                p = s.actual,
                d = a(c),
                f = d.error,
                m = d.actual;
              return o(
                r.label,
                l === f ? l : "".concat(l, " or ").concat(f),
                p === m ? p : "".concat(p, " and ").concat(m)
              );
            }
            if ("mismatch" === i.errorType) {
              var _ = a(i),
                h = _.error,
                y = _.actual;
              return o(r.label, h, y);
            }
            if ("mismatch" === c.errorType) {
              var b = a(c),
                v = b.error,
                g = b.actual;
              return o(r.label, v, g);
            }
            return O(i.error);
          }
          return "valid" === i.type ? i : c;
        };
      },
      A = function (e, t) {
        return function (n, r) {
          var a = Object(p.a)(e, function (e) {
            return e === n;
          });
          if (void 0 === a) {
            var o = t
              ? "a recognized string."
              : "one of the following strings: ".concat(e.join(", "));
            return j(o, n, r);
          }
          return w(a);
        };
      },
      I = function (e) {
        return function (t, n) {
          return "string" == typeof t && 0 === t.indexOf(e)
            ? w(t)
            : j("a string starting with ".concat(e), t, n);
        };
      },
      C = function (e, t) {
        return function (n, r) {
          return "string" == typeof n && n.length >= e && n.length <= t
            ? w(n)
            : j(
                e === t
                  ? "a string of ".concat(e, " characters")
                  : "a string with ".concat(e, " to ").concat(t, " characters"),
                n,
                r
              );
        };
      },
      N = function () {
        for (var e = arguments.length, t = new Array(e), n = 0; n < e; n++)
          t[n] = arguments[n];
        return A(t, !1);
      },
      R = function () {
        for (var e = arguments.length, t = new Array(e), n = 0; n < e; n++)
          t[n] = arguments[n];
        return A(t, !0);
      },
      M = N.apply(void 0, Object(i.a)(m)),
      L = N.apply(void 0, Object(i.a)(d)),
      x = N.apply(void 0, Object(i.a)(y)),
      D =
        (N.apply(void 0, Object(i.a)(Object.keys(b))),
        function (e, t) {
          return "string" == typeof e ? w(e) : j("a string", e, t);
        }),
      B = function (e, t) {
        return function (n, r) {
          return void 0 === n ? w(t()) : e(n, r);
        };
      },
      q = function (e, t) {
        return "boolean" == typeof e ? w(e) : j("a boolean", e, t);
      },
      F = function (e, t) {
        return "number" == typeof e ? w(e) : j("a number", e, t);
      },
      U = function (e) {
        return function (t, n) {
          return "number" == typeof t && t > e
            ? w(t)
            : j("a number greater than ".concat(e), t, n);
        };
      },
      H = function (e) {
        return function (t, n) {
          return "number" == typeof t && t === parseInt(t, 10) && (!e || t >= 0)
            ? w(t)
            : j(
                e
                  ? "a positive amount in the currency's subunit"
                  : "an amount in the currency's subunit",
                t,
                n
              );
        };
      },
      Y = function (e, t) {
        return H(!1)(e, t);
      },
      G = function (e, t) {
        return e && "object" == typeof e ? w(e) : j("an object", e, t);
      },
      z = function (e) {
        return function (t, n) {
          return Array.isArray(t)
            ? t
                .map(function (t, r) {
                  return e(t, P(n, String(r)));
                })
                .reduce(function (e, t) {
                  return "error" === e.type
                    ? e
                    : "error" === t.type
                    ? t
                    : w(
                        [].concat(Object(i.a)(e.value), [t.value]),
                        [].concat(
                          Object(i.a)(e.warnings),
                          Object(i.a)(t.warnings)
                        )
                      );
                }, w([]))
            : j("array", t, n);
        };
      },
      W = function (e) {
        return function (t) {
          return function (n, r) {
            if (Array.isArray(n)) {
              var a = t(n, r);
              if ("valid" === a.type)
                for (var o = {}, i = 0; i < a.value.length; i += 1) {
                  var c = a.value[i];
                  if ("object" == typeof c && c && "string" == typeof c[e]) {
                    var s = c[e],
                      l = "_".concat(s);
                    if (o[l])
                      return O(
                        new u.a(
                          "Duplicate value for "
                            .concat(e, ": ")
                            .concat(s, ". The property '")
                            .concat(e, "' of '")
                            .concat(r.path.join("."), "' has to be unique.")
                        )
                      );
                    o[l] = !0;
                  }
                }
              return a;
            }
            return j("array", n, r);
          };
        };
      },
      K = function (e) {
        return function (t, n) {
          return void 0 === t
            ? w(void 0)
            : j("used in ".concat(e, " instead"), t, n);
        };
      },
      V = function (e) {
        return function (t) {
          return function (n, a) {
            if (n && "object" == typeof n && !Array.isArray(n)) {
              var o = n,
                s = Object(p.a)(Object.keys(o), function (e) {
                  return !t[e];
                });
              if (s && e)
                return O(
                  new u.a(
                    "Invalid "
                      .concat(a.label, " parameter: ")
                      .concat(
                        [].concat(Object(i.a)(a.path), [s]).join("."),
                        " is not an accepted parameter."
                      )
                  )
                );
              var l = Object.keys(o),
                d = w({});
              return (
                s &&
                  (d = l.reduce(function (e, n) {
                    return t[n]
                      ? e
                      : w(
                          e.value,
                          [].concat(Object(i.a)(e.warnings), [
                            "Unrecognized "
                              .concat(a.label, " parameter: ")
                              .concat(
                                [].concat(Object(i.a)(a.path), [n]).join("."),
                                " is not a recognized parameter. This may cause issues with your integration in the future."
                              ),
                          ])
                        );
                  }, d)),
                Object.keys(t).reduce(function (e, n) {
                  if ("error" === e.type) return e;
                  var s = (0, t[n])(o[n], P(a, n));
                  return "valid" === s.type && void 0 !== s.value
                    ? w(
                        Object(r.a)(
                          Object(r.a)({}, e.value),
                          {},
                          Object(c.a)({}, n, s.value)
                        ),
                        [].concat(
                          Object(i.a)(e.warnings),
                          Object(i.a)(s.warnings)
                        )
                      )
                    : "valid" === s.type
                    ? w(
                        e.value,
                        [].concat(
                          Object(i.a)(e.warnings),
                          Object(i.a)(s.warnings)
                        )
                      )
                    : s;
                }, d)
              );
            }
            return j("an object", n, a);
          };
        };
      },
      J = V(!0),
      $ = V(!1),
      X = function (e, t, n, r) {
        var a = r || {},
          o = e(t, {
            authenticatedOrigin: a.authenticatedOrigin || "",
            element: a.element || "",
            label: n,
            path: a.path || [],
          });
        return "valid" === o.type || "full" === o.errorType
          ? o
          : {
              type: "error",
              errorType: "full",
              error: new u.a(E(o.expected, o.actual, o.options)),
            };
      },
      Z = function (e, t, n, r) {
        var a = X(e, t, n, r);
        switch (a.type) {
          case "valid":
            return { value: a.value, warnings: a.warnings };
          case "error":
            throw a.error;
          default:
            return Object(l.a)(a);
        }
      },
      Q = n(3),
      ee = "00".concat(Math.floor(1e3 * Math.random())).slice(-3),
      te = 0,
      ne = function (e) {
        return "".concat(e).concat(ee).concat(te++);
      },
      re = function e() {
        var t =
          arguments.length > 0 && void 0 !== arguments[0] ? arguments[0] : "";
        return t
          ? (
              parseInt(t, 10) ^
              ((16 * Math.random()) >> (parseInt(t, 10) / 4))
            ).toString(16)
          : "00000000-0000-4000-8000-000000000000".replace(/[08]/g, e);
      },
      ae = n(14),
      oe = n(15),
      ie = n(23),
      ce = n(2),
      se = n(10),
      ue = function (e) {
        var t,
          n = e.controllerId,
          a = e.frameId,
          o = e.targetOrigin,
          i = e.type,
          c = o;
        "controller" === i
          ? (t = Object(se.e)(a))
          : "group" === i
          ? (t = Object(se.e)(n))
          : "outer" === i || "hosted" === i
          ? (t = window.frames[a])
          : "inner" === i && ((c = c || "*"), (t = window.parent)),
          (c = c || Q.i),
          t &&
            "function" == typeof t.postMessage &&
            t.postMessage(
              JSON.stringify(
                Object(r.a)(Object(r.a)({}, e), {}, { __stripeJsV3: !0 })
              ),
              c
            );
      },
      le = (n(43), /https?:\/\/([^/]*)\/[^:]*/g),
      pe = function (e, t, n, r) {
        var a,
          o,
          i,
          c = e._isUserError || "IntegrationError" === e.name;
        throw (
          (t &&
            !c &&
            t.report("fatal.uncaught_error", {
              iframe: !1,
              name: e.name,
              element: "outer",
              message: e.message || e.description,
              fileName: e.fileName,
              lineNumber: e.lineNumber,
              columnNumber: e.columnNumber,
              stack:
                e.stack &&
                ((a = e.stack),
                (o = a.match(le)),
                (i = a),
                o &&
                  o.forEach(function (e) {
                    -1 === e.indexOf("https://js.stripe.com") &&
                      (i = i.replace(e, "<external url>"));
                  }),
                i.substring(0, 1e3)),
              inPromise: n,
              apiMethodName: r,
            }),
          e)
        );
      },
      de = function (e, t, n) {
        return function (r) {
          try {
            return e.call(this, r);
          } catch (e) {
            return pe(e, t || (this && this._controller), !1, n);
          }
        };
      },
      fe = function (e, t, n) {
        return function (r, a) {
          try {
            return e.call(this, r, a);
          } catch (e) {
            return pe(e, t || (this && this._controller), !1, n);
          }
        };
      },
      me = function (e, t, n) {
        return function (r) {
          var a = this;
          try {
            return e.call(this, r).catch(function (e) {
              return pe(e, t || (a && a._controller), !0, n);
            });
          } catch (e) {
            return pe(e, t || (this && this._controller), !1, n);
          }
        };
      },
      _e = function (e, t, n) {
        return function (r, a) {
          var o = this;
          try {
            return e.call(this, r, a).catch(function (e) {
              return pe(e, t || (o && o._controller), !0, n);
            });
          } catch (e) {
            return pe(e, t || (this && this._controller), !1, n);
          }
        };
      },
      he = function (e, t, n) {
        return function (r, a, o) {
          var i = this;
          try {
            return e.call(this, r, a, o).catch(function (e) {
              return pe(e, t || (i && i._controller), !0, n);
            });
          } catch (e) {
            return pe(e, t || (this && this._controller), !1, n);
          }
        };
      },
      ye = function e() {
        var t = this;
        Object(a.a)(this, e),
          (this._emit = function (e) {
            for (
              var n = arguments.length, r = new Array(n > 1 ? n - 1 : 0), a = 1;
              a < n;
              a++
            )
              r[a - 1] = arguments[a];
            var o = t._callbacks[e] || [];
            return (
              o.forEach(function (e) {
                var t = e.fn;
                if (t._isUserCallback)
                  try {
                    t.apply(void 0, r);
                  } catch (e) {
                    throw ((e._isUserError = !0), e);
                  }
                else t.apply(void 0, r);
              }),
              t
            );
          }),
          (this._once = function (e, n) {
            return t._on(
              e,
              function r() {
                t._off(e, r), n.apply(void 0, arguments);
              },
              n
            );
          }),
          (this._removeAllListeners = function () {
            return (t._callbacks = {}), t;
          }),
          (this._on = function (e, n, r) {
            return (
              (t._callbacks[e] = t._callbacks[e] || []),
              t._callbacks[e].push({ original: r, fn: n }),
              t
            );
          }),
          (this._validateUserOn = function (e, t) {}),
          (this._userOn = function (e, n) {
            if ("string" != typeof e)
              throw new u.a(
                "When adding an event listener, the first argument should be a string event name."
              );
            if ("function" != typeof n)
              throw new u.a(
                "When adding an event listener, the second argument should be a function callback."
              );
            return (
              t._validateUserOn(e, n), (n._isUserCallback = !0), t._on(e, n)
            );
          }),
          (this._hasRegisteredListener = function (e) {
            return t._callbacks[e] && t._callbacks[e].length > 0;
          }),
          (this._off = function (e, n) {
            if (n) {
              for (var r, a = t._callbacks[e], o = 0; o < a.length; o++)
                if ((r = a[o]).fn === n || r.original === n) {
                  a.splice(o, 1);
                  break;
                }
            } else delete t._callbacks[e];
            return t;
          }),
          (this._callbacks = {});
        var n,
          r,
          o,
          i = fe(this._userOn),
          c = fe(this._off),
          s = fe(this._once),
          l = de(this._hasRegisteredListener),
          p = de(this._removeAllListeners),
          d =
            ((n = this._emit),
            function () {
              try {
                for (
                  var e = arguments.length, t = new Array(e), a = 0;
                  a < e;
                  a++
                )
                  t[a] = arguments[a];
                return n.call.apply(n, [this].concat(t));
              } catch (e) {
                return pe(e, r || (this && this._controller), !1, o);
              }
            });
        (this.on = this.addListener = this.addEventListener = i),
          (this.off = this.removeListener = this.removeEventListener = c),
          (this.once = s),
          (this.hasRegisteredListener = l),
          (this.removeAllListeners = p),
          (this.emit = d);
      },
      be = (function (e) {
        Object(ae.a)(n, e);
        var t = Object(oe.a)(n);
        function n(e) {
          var r,
            o = e.type,
            i = e.controllerId,
            c = e.listenerRegistry,
            s = e.betas,
            u = e.appParams;
          return (
            Object(a.a)(this, n),
            ((r = t.call(this))._sendFAReq = function (e) {
              var t = ne(e.tag);
              return new ce.a(function (n, a) {
                (r._requests[t] = { resolve: n, reject: a }),
                  r._send({
                    message: {
                      action: "stripe-frame-action",
                      payload: { nonce: t, faReq: e },
                    },
                    type: "outer",
                    frameId: r.id,
                    controllerId: r._controllerId,
                  });
              });
            }),
            (r.action = {
              perform3DS2Challenge: function (e) {
                return r._sendFAReq({
                  tag: "PERFORM_3DS2_CHALLENGE",
                  value: e,
                });
              },
              perform3DS2Fingerprint: function (e) {
                return r._sendFAReq({
                  tag: "PERFORM_3DS2_FINGERPRINT",
                  value: e,
                });
              },
              show3DS2Spinner: function (e) {
                return r._sendFAReq({ tag: "SHOW_3DS2_SPINNER", value: e });
              },
              checkCanMakePayment: function (e) {
                return r._sendFAReq({
                  tag: "CHECK_CAN_MAKE_PAYMENT",
                  value: e,
                });
              },
              closeLightboxFrame: function (e) {
                return r._sendFAReq({ tag: "CLOSE_LIGHTBOX_FRAME", value: e });
              },
              openLightboxFrame: function (e) {
                return r._sendFAReq({ tag: "OPEN_LIGHTBOX_FRAME", value: e });
              },
              setFocusTarget: function (e) {
                return r._sendFAReq({ tag: "SET_FOCUS_TARGET", value: e });
              },
            }),
            (r.type = o),
            (r.loaded = !1),
            (r._controllerId = i),
            (r._persistentMessages = []),
            (r._queuedMessages = []),
            (r._requests = {}),
            (r._listenerRegistry = c),
            (r.id = r._generateId()),
            (r._iframe = r._createIFrame(o, s, u)),
            r._on("load", function () {
              (r.loaded = !0),
                r._ensureMounted(),
                r.loaded &&
                  (r._persistentMessages.forEach(function (e) {
                    return r._send(e);
                  }),
                  r._queuedMessages.forEach(function (e) {
                    return r._send(e);
                  }),
                  (r._queuedMessages = []));
            }),
            r._on("title", function (e) {
              var t = e.title;
              r._iframe.setAttribute("title", t);
            }),
            r
          );
        }
        return (
          Object(o.a)(n, [
            {
              key: "_generateId",
              value: function () {
                return ne("__privateStripeFrame");
              },
            },
            {
              key: "send",
              value: function (e) {
                this._send({
                  message: e,
                  type: "outer",
                  frameId: this.id,
                  controllerId: this._controllerId,
                });
              },
            },
            {
              key: "sendPersistent",
              value: function (e) {
                this._ensureMounted();
                var t = {
                  message: e,
                  type: "outer",
                  frameId: this.id,
                  controllerId: this._controllerId,
                };
                (this._persistentMessages = [].concat(
                  Object(i.a)(this._persistentMessages),
                  [t]
                )),
                  this.loaded && ue(t);
              },
            },
            {
              key: "resolve",
              value: function (e, t) {
                this._requests[e] && this._requests[e].resolve(t);
              },
            },
            {
              key: "reject",
              value: function (e, t) {
                this._requests[e] && this._requests[e].reject(t);
              },
            },
            {
              key: "_send",
              value: function (e) {
                this._ensureMounted(),
                  this.loaded
                    ? ue(e)
                    : (this._queuedMessages = [].concat(
                        Object(i.a)(this._queuedMessages),
                        [e]
                      ));
              },
            },
            {
              key: "appendTo",
              value: function (e) {
                this._emit("mount", { anchor: e }), e.appendChild(this._iframe);
              },
            },
            {
              key: "unmount",
              value: function () {
                (this.loaded = !1), this._emit("unload");
              },
            },
            {
              key: "destroy",
              value: function () {
                this.unmount();
                var e = this._iframe.parentElement;
                e && e.removeChild(this._iframe), this._emit("destroy");
              },
            },
            {
              key: "_ensureMounted",
              value: function () {
                this._isMounted() || this.unmount();
              },
            },
            {
              key: "_isMounted",
              value: function () {
                return !!document.body && document.body.contains(this._iframe);
              },
            },
            {
              key: "_createIFrame",
              value: function (e, t, n) {
                var a = window.location.href.toString(),
                  o =
                    "string" == typeof n
                      ? n
                      : Object(ie.a)(
                          Object(r.a)(
                            Object(r.a)({}, n || {}),
                            {},
                            { referrer: a, controllerId: this._controllerId }
                          )
                        ),
                  i = document.createElement("iframe");
                i.setAttribute("name", this.id);
                var c = Object(Q.d)(e);
                return (
                  Object.keys(c).forEach(function (e) {
                    i.setAttribute(e, c[e]);
                  }),
                  (null == n ? void 0 : n.allowCamera) &&
                    i.setAttribute("allow", "camera"),
                  (i.src = ""
                    .concat(Object(Q.e)(e))
                    .concat(o ? "#" : "")
                    .concat(o)),
                  i
                );
              },
            },
          ]),
          n
        );
      })(ye),
      ve = n(18),
      ge = n(17);
    function Ee(e, t, n) {
      return (Ee =
        "undefined" != typeof Reflect && Reflect.get
          ? Reflect.get
          : function (e, t, n) {
              var r = (function (e, t) {
                for (
                  ;
                  !Object.prototype.hasOwnProperty.call(e, t) &&
                  null !== (e = Object(ge.a)(e));

                );
                return e;
              })(e, t);
              if (r) {
                var a = Object.getOwnPropertyDescriptor(r, t);
                return a.get ? a.get.call(n) : a.value;
              }
            })(e, t, n || e);
    }
    var we = (function (e) {
        Object(ae.a)(n, e);
        var t = Object(oe.a)(n);
        function n(e) {
          var r;
          if (
            (Object(a.a)(this, n),
            ((r = t.call(this, e)).autoload = e.autoload || !1),
            "complete" === document.readyState)
          )
            r._ensureMounted();
          else {
            var o = r._ensureMounted.bind(Object(ve.a)(r));
            r._listenerRegistry.addEventListener(
              document,
              "DOMContentLoaded",
              o
            ),
              r._listenerRegistry.addEventListener(window, "load", o),
              setTimeout(o, 5e3);
          }
          return r;
        }
        return (
          Object(o.a)(n, [
            {
              key: "_ensureMounted",
              value: function () {
                Ee(Object(ge.a)(n.prototype), "_ensureMounted", this).call(
                  this
                ),
                  this._isMounted() || this._autoMount();
              },
            },
            {
              key: "_autoMount",
              value: function () {
                var e = document.body;
                if (e) {
                  var t =
                    document.querySelector("#stripe-hidden-frames-container") ||
                    e;
                  this.appendTo(t);
                } else if (
                  "complete" === document.readyState ||
                  "interactive" === document.readyState
                )
                  throw new u.a(
                    "Stripe.js requires that your page has a <body> element."
                  );
                this.autoload && (this.loaded = !0);
              },
            },
            {
              key: "_createIFrame",
              value: function (e, t, r) {
                var a = Ee(
                  Object(ge.a)(n.prototype),
                  "_createIFrame",
                  this
                ).call(this, e, t, r);
                return (
                  a.setAttribute("aria-hidden", "true"),
                  a.setAttribute("tabIndex", "-1"),
                  Object(se.c)(a),
                  a
                );
              },
            },
          ]),
          n
        );
      })(be),
      Oe = (function (e) {
        Object(ae.a)(n, e);
        var t = Object(oe.a)(n);
        function n() {
          return Object(a.a)(this, n), t.apply(this, arguments);
        }
        return (
          Object(o.a)(n, [
            {
              key: "_generateId",
              value: function () {
                return this._controllerId;
              },
            },
          ]),
          n
        );
      })(we),
      ke = function (e) {
        return /Edge\//i.test(e);
      },
      je = function (e) {
        return /(MSIE ([0-9]{1,}[.0-9]{0,})|Trident\/)/i.test(e);
      },
      Pe = function (e) {
        return /SamsungBrowser/.test(e);
      },
      Se = function (e) {
        return /iPad|iPhone/i.test(e) && !je(e);
      },
      Te = function (e) {
        return /^((?!chrome|android).)*safari/i.test(e) && !Pe(e);
      },
      Ae = function (e) {
        return /Android/i.test(e) && !je(e);
      },
      Ie = window.navigator.userAgent,
      Ce = ke(Ie),
      Ne = (/Edge\/((1[0-6]\.)|0\.)/i.test(Ie), je(Ie)),
      Re =
        ((function (e) {
          /MSIE ([0-9]{1,}[.0-9]{0,})/i.test(e);
        })(Ie),
        Se(Ie)),
      Me =
        ((function (e) {
          Se(e) || Ae(e);
        })(Ie),
        Ae(Ie)),
      Le =
        ((function (e) {
          /Android 4\./i.test(e) && !/Chrome/i.test(e) && Ae(e);
        })(Ie),
        Te(Ie)),
      xe =
        ((function (e) {
          Te(e) && Se(e);
        })(Ie),
        (function (e) {
          /Firefox\//i.test(e);
        })(Ie),
        (function (e) {
          /Firefox\/(50|51|[0-4]?\d)([^\d]|$)/i.test(e);
        })(Ie),
        Pe(Ie)),
      De =
        ((function (e) {
          /Chrome\/(6[6-9]|[7-9]\d+|[1-9]\d{2,})/i.test(e);
        })(Ie),
        (function (e) {
          return (
            /AppleWebKit/i.test(e) && !/Chrome/i.test(e) && !ke(e) && !je(e)
          );
        })(Ie)),
      Be = (function (e) {
        return /Chrome/i.test(e) && !ke(e);
      })(Ie),
      qe =
        ((function (e) {
          /CriOS/i.test(e);
        })(Ie),
        Le && "download" in document.createElement("a")),
      Fe =
        (!!window.navigator.brave && window.navigator.brave.isBrave,
        {
          border: "none",
          margin: "0",
          padding: "0",
          width: "1px",
          "min-width": "100%",
          overflow: "hidden",
          display: "block",
          "user-select": "none",
          "will-change": "transform",
        }),
      Ue = (function (e) {
        Object(ae.a)(n, e);
        var t = Object(oe.a)(n);
        function n(e) {
          var r;
          return (
            Object(a.a)(this, n),
            (r = t.call(this, e)),
            Le &&
              r._listenerRegistry.addEventListener(
                document,
                "transitionstart",
                function (e) {
                  switch (e.propertyName) {
                    case "opacity":
                    case "transform":
                    case "visibility":
                      var t = e.target;
                      r._isMounted() &&
                        t.contains(r._iframe) &&
                        r._forceRepaint();
                  }
                },
                { passive: !0 }
              ),
            r
          );
        }
        return (
          Object(o.a)(n, [
            {
              key: "update",
              value: function (e) {
                this.send({ action: "stripe-user-update", payload: e });
              },
            },
            {
              key: "updateStyle",
              value: function (e) {
                var t = this;
                Object.keys(e).forEach(function (n) {
                  t._iframe.style[n] = e[n];
                });
              },
            },
            {
              key: "focus",
              value: function () {
                this.loaded &&
                  (Le
                    ? this._iframe.focus()
                    : this.send({ action: "stripe-user-focus", payload: {} }));
              },
            },
            {
              key: "blur",
              value: function () {
                this.loaded &&
                  (this._iframe.contentWindow.blur(),
                  this._iframe.blur(),
                  document.activeElement === this._iframe &&
                    (window.focus(),
                    document.activeElement &&
                      "function" == typeof document.activeElement.blur &&
                      document.activeElement.blur()));
              },
            },
            {
              key: "clear",
              value: function () {
                this.send({ action: "stripe-user-clear", payload: {} });
              },
            },
            {
              key: "collapse",
              value: function () {
                this.send({ action: "stripe-user-collapse", payload: {} });
              },
            },
            {
              key: "_createIFrame",
              value: function (e, t, r) {
                var a = Ee(
                  Object(ge.a)(n.prototype),
                  "_createIFrame",
                  this
                ).call(this, e, t, r);
                return (
                  a.setAttribute("title", "Secure payment input frame"),
                  Object(se.d)(a, Fe),
                  a
                );
              },
            },
            {
              key: "_forceRepaint",
              value: function () {
                var e = this._iframe,
                  t = e.style.display;
                e.style.display = "none";
                var n = e.offsetHeight;
                return (e.style.display = t), n;
              },
            },
          ]),
          n
        );
      })(be),
      He = n(35),
      Ye = n(24),
      Ge = {
        display: "block",
        position: "fixed",
        "z-index": "2147483647",
        background: "rgba(40,40,40,0)",
        transition: "background 400ms ease",
        "will-change": "background",
        top: "0",
        left: "0",
        right: "0",
        bottom: "0",
      },
      ze = Object(r.a)(
        Object(r.a)({}, Ge),
        {},
        { background: "rgba(40,40,40,0.75)" }
      ),
      We = function e(t) {
        var n = this,
          r = t.lockScrolling,
          o = t.lockFocus,
          i = t.lockFocusOn,
          c = t.listenerRegistry;
        Object(a.a)(this, e),
          (this.domElement = document.createElement("div")),
          (this._runOnHide = []),
          (this.mount = function () {
            var e = Object(se.a)();
            (n.domElement.style.display = "none"),
              e.contains(n.domElement) ||
                e.insertBefore(n.domElement, e.firstChild);
          }),
          (this.show = function () {
            if ((Object(se.d)(n.domElement, Ge), n._lockScrolling)) {
              var e = Object(He.a)();
              n._runOnHide.push(e);
            }
            if (n._lockFocus) {
              var t = Object(Ye.a)(n._lockFocusOn).restoreFocus;
              n._runOnHide.push(t);
            }
          }),
          (this.fadeIn = function () {
            setTimeout(function () {
              Object(se.d)(n.domElement, ze);
            });
          }),
          (this.fadeOut = function () {
            return new ce.a(function (e) {
              Object(se.d)(n.domElement, Ge),
                setTimeout(e, 500),
                n._listenerRegistry.addEventListener(
                  n.domElement,
                  "transitionend",
                  e
                );
            }).then(function () {
              for (n.domElement.style.display = "none"; n._runOnHide.length; )
                n._runOnHide.pop()();
            });
          }),
          (this.unmount = function () {
            Object(se.a)().removeChild(n.domElement);
          }),
          (this._lockScrolling = !!r),
          (this._lockFocus = !!o),
          (this._lockFocusOn = i || null),
          (this._listenerRegistry = c);
      },
      Ke = {
        position: "absolute",
        left: "0",
        top: "0",
        height: "100%",
        width: "100%",
      },
      Ve = (function (e) {
        Object(ae.a)(n, e);
        var t = Object(oe.a)(n);
        function n(e) {
          var r,
            o,
            i,
            c = e.type,
            s = e.controllerId,
            u = e.listenerRegistry,
            l = e.options;
          return (
            Object(a.a)(this, n),
            ((i = t.call(this, {
              type: c,
              controllerId: s,
              listenerRegistry: u,
              appParams: l,
            }))._autoMount = function () {
              i.appendTo(i._backdrop.domElement), i._backdrop.mount();
            }),
            (i.show = function () {
              i._backdrop.show(), Object(se.d)(i._iframe, Ke);
            }),
            (i.fadeInBackdrop = function () {
              i._backdrop.fadeIn();
            }),
            (i._backdropFadeoutPromise = null),
            (i.fadeOutBackdrop = function () {
              return (
                i._backdropFadeoutPromise ||
                  (i._backdropFadeoutPromise = i._backdrop.fadeOut()),
                i._backdropFadeoutPromise
              );
            }),
            (i.destroy = function () {
              var e =
                  arguments.length > 0 &&
                  void 0 !== arguments[0] &&
                  arguments[0],
                t = i.fadeOutBackdrop().then(function () {
                  i._backdrop.unmount(),
                    e ||
                      Ee(
                        ((r = Object(ve.a)(i)), Object(ge.a)(n.prototype)),
                        "destroy",
                        r
                      ).call(r);
                });
              return (
                e &&
                  Ee(
                    ((o = Object(ve.a)(i)), Object(ge.a)(n.prototype)),
                    "destroy",
                    o
                  ).call(o),
                t
              );
            }),
            (i._backdrop = new We({
              lockScrolling: !0,
              lockFocus: !0,
              lockFocusOn: i._iframe,
              listenerRegistry: u,
            })),
            i._autoMount(),
            i
          );
        }
        return n;
      })(be),
      Je = {
        display: "block",
        position: "absolute",
        "z-index": "1000",
        width: "1px",
        "min-width": "100%",
        margin: "2px 0 0 0",
        padding: "0",
        border: "none",
        overflow: "hidden",
      },
      $e = (function (e) {
        Object(ae.a)(n, e);
        var t = Object(oe.a)(n);
        function n() {
          return Object(a.a)(this, n), t.apply(this, arguments);
        }
        return (
          Object(o.a)(n, [
            {
              key: "updateStyle",
              value: function (e) {
                var t = this;
                Object.keys(e).forEach(function (n) {
                  t._iframe.style[n] = e[n];
                });
              },
            },
            {
              key: "update",
              value: function (e) {
                this.send({ action: "stripe-user-update", payload: e });
              },
            },
            {
              key: "_createIFrame",
              value: function (e, t, a) {
                var o = Ee(
                  Object(ge.a)(n.prototype),
                  "_createIFrame",
                  this
                ).call(
                  this,
                  e,
                  t,
                  a && "object" == typeof a
                    ? Object(r.a)(
                        Object(r.a)({}, a),
                        {},
                        { isSecondaryFrame: !0 }
                      )
                    : a
                );
                return Object(se.d)(o, Je), (o.style.height = "0"), o;
              },
            },
          ]),
          n
        );
      })(be),
      Xe = n(21),
      Ze = [
        "button",
        "checkbox",
        "file",
        "hidden",
        "image",
        "submit",
        "radio",
        "reset",
      ],
      Qe = function (e) {
        var t = e.tagName;
        if (e.isContentEditable || "TEXTAREA" === t) return !0;
        if ("INPUT" !== t) return !1;
        var n = e.getAttribute("type");
        return -1 === Ze.indexOf(n);
      },
      et = function (e) {
        var t = e.name,
          n = e.value,
          r = e.expiresIn,
          a = e.path,
          o = e.domain,
          i = new Date(),
          c = r || 31536e6;
        i.setTime(i.getTime() + c);
        var s = a || "/",
          u = (n || "").replace(/[^!#-+\--:<-[\]-~]/g, encodeURIComponent),
          l = ""
            .concat(encodeURIComponent(t), "=")
            .concat(u, ";expires=")
            .concat(i.toGMTString(), ";path=")
            .concat(s, ";SameSite=Lax");
        return o && (l += ";domain=".concat(o)), (document.cookie = l), l;
      },
      tt = function (e) {
        var t = Object(p.a)(document.cookie.split("; "), function (t) {
          var n = t.indexOf("=");
          return decodeURIComponent(t.substr(0, n)) === e;
        });
        if (t) {
          var n = t.indexOf("=");
          return decodeURIComponent(t.substr(n + 1));
        }
        return null;
      },
      nt = function (e, t) {
        return Object.prototype.hasOwnProperty.call(e, t);
      },
      rt = function (e) {
        var t = {};
        return (
          e
            .replace(/\+/g, " ")
            .split("&")
            .forEach(function (e, n) {
              var r,
                a = e.split("="),
                o = decodeURIComponent(a[0]),
                i = t,
                c = 0,
                s = o.split("]["),
                u = s.length - 1;
              if (
                (/\[/.test(s[0]) && /\]$/.test(s[u])
                  ? ((s[u] = s[u].replace(/\]$/, "")),
                    (u = (s = s.shift().split("[").concat(s)).length - 1))
                  : (u = 0),
                !(s.indexOf("__proto__") >= 0))
              )
                if (2 === a.length)
                  if (((r = decodeURIComponent(a[1])), u))
                    for (; c <= u; c++) {
                      if (
                        ((o = "" === s[c] ? i.length : s[c]), !nt(i, o) && i[o])
                      )
                        return;
                      (i[o] =
                        c < u
                          ? i[o] || (s[c + 1] && isNaN(s[c + 1]) ? {} : [])
                          : r),
                        (i = i[o]);
                    }
                  else if (Array.isArray(t[o])) t[o].push(r);
                  else if (void 0 !== t[o]) {
                    if (!nt(t, o)) return;
                    t[o] = [t[o], r];
                  } else t[o] = r;
                else o && (t[o] = "");
            }),
          t
        );
      },
      at = n(38),
      ot = n.n(at);
    function it() {
      return (it =
        Object.assign ||
        function (e) {
          for (var t = 1; t < arguments.length; t++) {
            var n = arguments[t];
            for (var r in n)
              Object.prototype.hasOwnProperty.call(n, r) && (e[r] = n[r]);
          }
          return e;
        }).apply(this, arguments);
    }
    n(31), n(29), n(25), n(32);
    var ct = function (e, t) {
        for (var n = {}, r = 0; r < t.length; r++)
          void 0 !== e[t[r]] && (n[t[r]] = e[t[r]]);
        return n;
      },
      st = function (e) {
        return (
          e &&
          "object" == typeof e &&
          (e.constructor === Array || e.constructor === Object)
        );
      },
      ut = function (e) {
        return st(e)
          ? Array.isArray(e)
            ? e.slice(0, e.length)
            : it({}, e)
          : e;
      },
      lt = function e(t) {
        return function () {
          for (var n = arguments.length, r = new Array(n), a = 0; a < n; a++)
            r[a] = arguments[a];
          if (Array.isArray(r[0]) && t) return ut(r[0]);
          var o = Array.isArray(r[0]) ? [] : {};
          return (
            r.forEach(function (n) {
              n &&
                Object.keys(n).forEach(function (r) {
                  var a = o[r],
                    i = n[r],
                    c = st(a) && !(t && Array.isArray(a));
                  "object" == typeof i && c
                    ? (o[r] = e(t)(a, ut(i)))
                    : void 0 !== i
                    ? (o[r] = st(i) ? e(t)(i) : ut(i))
                    : void 0 !== a && (o[r] = a);
                });
            }),
            o
          );
        };
      },
      pt = lt(!1),
      dt = lt(!0),
      ft = Q.l.replace(/\/$/, "");
    var mt,
      _t,
      ht,
      yt,
      bt,
      vt,
      gt,
      Et,
      wt,
      Ot = "_1776170249",
      kt = (function (e) {
        var t = Object(c.a)({}, Ot, !0);
        try {
          var n = rt(e.slice(e.indexOf("?") + 1));
          Object.keys(n).forEach(function (e) {
            var r = ot()(e),
              a = n[e];
            switch (r) {
              case Ot:
                "false" === a && (t[r] = !1);
            }
          });
        } catch (e) {}
        return t;
      })(
        (function (e) {
          try {
            if (e.currentScript) return e.currentScript.src;
            var t = e.querySelectorAll('script[src^="'.concat(ft, '"]')),
              n = Object(p.a)(t, function (e) {
                var t = (e.getAttribute("src") || "").split("?")[0];
                return new RegExp("^".concat(ft, "/?$")).test(t);
              });
            return (n && n.getAttribute("src")) || "";
          } catch (e) {
            return "";
          }
        })(document)
      )._1776170249,
      jt = n(16),
      Pt = function () {
        var e = [];
        return {
          addEventListener: function (t, n, r, a) {
            t.addEventListener(n, r, a), e.push([t, n, r, a]);
          },
          removeEventListener: function (t, n, r, a) {
            t.removeEventListener(n, r, a),
              (e = e.filter(function (e) {
                return (function (e, t) {
                  var n = Object(jt.a)(e, 4),
                    r = n[0],
                    a = n[1],
                    o = n[2],
                    i = n[3],
                    c = Object(jt.a)(t, 4),
                    s = c[0],
                    u = c[1],
                    l = c[2],
                    p = c[3];
                  return (
                    s !== r ||
                    u !== a ||
                    l !== o ||
                    (!0 === ("object" == typeof i && i ? i.capture : i)) !=
                      (!0 === ("object" == typeof p && p ? p.capture : p))
                  );
                })([t, n, r, a], e);
              }));
          },
        };
      },
      St = "__privateStripeMetricsController",
      Tt = "merchant",
      At = "session",
      It = "NA",
      Ct = function (e) {
        return 42 === e.length;
      },
      Nt = function (e, t, n) {
        return n ? (!e || (!Ct(e) && Ct(t)) ? t : e) : re();
      },
      Rt = (function () {
        function e() {
          var t = this,
            n =
              arguments.length > 0 && void 0 !== arguments[0]
                ? arguments[0]
                : {};
          if (
            (Object(a.a)(this, e),
            (this._controllerFrame = null),
            (this._latencies = []),
            (this._handleMessage = function (e) {
              return function (n) {
                var r = n.data,
                  a = n.origin;
                if (Object(Xe.c)(a) && "string" == typeof r)
                  try {
                    var o = JSON.parse(r),
                      i = o.originatingScript,
                      c = o.payload;
                    if ("m2" === i) {
                      var s = c.guid,
                        u = c.muid,
                        l = c.sid;
                      (t._guid = s),
                        (t._muid = t._getID(Tt, u)),
                        (t._sid = t._getID(At, l)),
                        e();
                    }
                  } catch (e) {}
              };
            }),
            n.checkoutIds)
          ) {
            var r = n.checkoutIds,
              o = r.muid,
              i = r.sid;
            (this._guid = It),
              (this._muid = o),
              (this._sid = i),
              (this._doNotPersist = "NA" !== o && "NA" !== i);
          } else
            (this._guid = It),
              (this._muid = this._getID(Tt)),
              (this._sid = this._getID(At)),
              (this._doNotPersist = !1);
          (this._listenerRegistry = Pt()),
            (this._idsPromise = new ce.a(function (e) {
              t._establishMessageChannel(e);
            })),
            (this._id = ne(St)),
            kt &&
              ((this._controllerFrame = new Oe({
                type: Q.c.METRICS_CONTROLLER,
                controllerId: this._id,
                listenerRegistry: this._listenerRegistry,
                autoload: !0,
                appParams: this._buildFrameQueryString(),
              })),
              this._startIntervalCheck(),
              setTimeout(
                this._testLatency.bind(this),
                2e3 + 500 * Math.random()
              ));
        }
        return (
          Object(o.a)(e, [
            {
              key: "ids",
              value: function () {
                return { guid: this._guid, muid: this._muid, sid: this._sid };
              },
            },
            {
              key: "idsPromise",
              value: function () {
                var e = this;
                return this._idsPromise.then(function () {
                  return e.ids();
                });
              },
            },
            {
              key: "_establishMessageChannel",
              value: function (e) {
                if (!kt) return (this._guid = re()), void e();
                this._listenerRegistry.addEventListener(
                  window,
                  "message",
                  this._handleMessage(e)
                );
              },
            },
            {
              key: "_startIntervalCheck",
              value: function () {
                var e = this,
                  t = window.location.href;
                setInterval(function () {
                  var n = window.location.href;
                  n !== t &&
                    (e.send(function (e) {
                      return {
                        action: "ping",
                        payload: {
                          sid: e.sid,
                          muid: e.muid,
                          title: document.title,
                          referrer: document.referrer,
                          url: document.location.href,
                          version: 6,
                        },
                      };
                    }),
                    (t = n));
                }, 5e3);
              },
            },
            {
              key: "report",
              value: function (e, t) {
                this.send(function (n) {
                  return {
                    action: "track",
                    payload: {
                      sid: n.sid,
                      muid: n.muid,
                      url: document.location.href,
                      source: e,
                      data: t,
                      version: 6,
                    },
                  };
                });
              },
            },
            {
              key: "send",
              value: function (e) {
                var t = this;
                this._idsPromise.then(function () {
                  try {
                    t._controllerFrame && t._controllerFrame.send(e(t.ids()));
                  } catch (e) {}
                });
              },
            },
            {
              key: "_testLatency",
              value: function () {
                var e = this,
                  t = new Date();
                this._listenerRegistry.addEventListener(
                  document,
                  "mousemove",
                  function n() {
                    try {
                      var r = new Date();
                      e._latencies.push(r - t),
                        e._latencies.length >= 10 &&
                          (e.report("mouse-timings-10", e._latencies),
                          e._listenerRegistry.removeEventListener(
                            document,
                            "mousemove",
                            n
                          )),
                        (t = r);
                    } catch (e) {}
                  }
                );
              },
            },
            {
              key: "_extractMetaReferrerPolicy",
              value: function () {
                var e = document.querySelector("meta[name=referrer]");
                return null != e && e instanceof HTMLMetaElement
                  ? e.content.toLowerCase()
                  : null;
              },
            },
            {
              key: "_extractUrl",
              value: function (e) {
                var t = document.location.href;
                switch (e) {
                  case "origin":
                  case "strict-origin":
                  case "origin-when-cross-origin":
                  case "strict-origin-when-cross-origin":
                    return document.location.origin;
                  case "unsafe-url":
                    return t.split("#")[0];
                  default:
                    return t;
                }
              },
            },
            {
              key: "_buildFrameQueryString",
              value: function () {
                var e = this._extractMetaReferrerPolicy(),
                  t = this._extractUrl(e),
                  n = {
                    url: t,
                    title: document.title,
                    referrer: document.referrer,
                    muid: this._muid,
                    sid: this._sid,
                    version: 6,
                    preview: Object(Xe.c)(t),
                  };
                return (
                  null != e && (n.metaReferrerPolicy = e),
                  Object.keys(n)
                    .map(function (e) {
                      return null != n[e]
                        ? ""
                            .concat(e, "=")
                            .concat(encodeURIComponent(n[e].toString()))
                        : null;
                    })
                    .join("&")
                );
              },
            },
            {
              key: "_getID",
              value: function (e) {
                var t =
                  arguments.length > 1 && void 0 !== arguments[1]
                    ? arguments[1]
                    : It;
                switch (e) {
                  case Tt:
                    if (this._doNotPersist) return Nt(this._muid, t, kt);
                    try {
                      var n = "__stripe_mid",
                        r = Nt(tt(n), t, kt);
                      return (
                        Ct(r) &&
                          et({
                            name: n,
                            value: r,
                            domain: ".".concat(document.location.hostname),
                          }),
                        r
                      );
                    } catch (e) {
                      return It;
                    }
                  case At:
                    if (this._doNotPersist) return Nt(this._sid, t, kt);
                    try {
                      var a = "__stripe_sid",
                        o = Nt(tt(a), t, kt);
                      return (
                        Ct(o) &&
                          et({
                            name: a,
                            value: o,
                            domain: ".".concat(document.location.hostname),
                            expiresIn: 18e5,
                          }),
                        o
                      );
                    } catch (e) {
                      return It;
                    }
                  default:
                    throw new Error("Invalid ID type specified: ".concat(e));
                }
              },
            },
          ]),
          e
        );
      })(),
      Mt = null,
      Lt = function () {
        var e =
          arguments.length > 0 && void 0 !== arguments[0] ? arguments[0] : {};
        return (Mt = new Rt(e));
      },
      xt = !1,
      Dt = function () {
        var e = Mt;
        e &&
          (xt ||
            ((xt = !0),
            e.send(function (e) {
              return {
                action: "ping",
                payload: {
                  v2: 2,
                  sid: e.sid,
                  muid: e.muid,
                  title: document.title,
                  referrer: document.referrer,
                  url: document.location.href,
                  version: 6,
                },
              };
            }),
            e.send(function (t) {
              return {
                action: "track",
                payload: {
                  sid: t.sid,
                  muid: t.muid,
                  url: document.location.href,
                  source: "mouse-timings-10-v2",
                  data: e._latencies,
                  version: 6,
                },
              };
            })));
      },
      Bt = n(9),
      qt = {
        checkout_beta_2: "checkout_beta_2",
        checkout_beta_3: "checkout_beta_3",
        checkout_beta_4: "checkout_beta_4",
        checkout_beta_testcards: "checkout_beta_testcards",
        payment_intent_beta_1: "payment_intent_beta_1",
        payment_intent_beta_2: "payment_intent_beta_2",
        payment_intent_beta_3: "payment_intent_beta_3",
        card_payment_method_beta_1: "card_payment_method_beta_1",
        acknowledge_ie9_deprecation: "acknowledge_ie9_deprecation",
        cvc_update_beta_1: "cvc_update_beta_1",
        google_pay_beta_1: "google_pay_beta_1",
        acss_debit_beta_1: "acss_debit_beta_1",
        acss_debit_beta_2: "acss_debit_beta_2",
        afterpay_clearpay_pm_beta_1: "afterpay_clearpay_pm_beta_1",
        alipay_pm_beta_1: "alipay_pm_beta_1",
        au_bank_account_beta_1: "au_bank_account_beta_1",
        au_bank_account_beta_2: "au_bank_account_beta_2",
        bacs_debit_beta: "bacs_debit_beta",
        bancontact_pm_beta_1: "bancontact_pm_beta_1",
        boleto_pm_beta_1: "boleto_pm_beta_1",
        eps_pm_beta_1: "eps_pm_beta_1",
        fpx_bank_beta_1: "fpx_bank_beta_1",
        giropay_pm_beta_1: "giropay_pm_beta_1",
        grabpay_pm_beta_1: "grabpay_pm_beta_1",
        ideal_pm_beta_1: "ideal_pm_beta_1",
        klarna_pm_beta_1: "klarna_pm_beta_1",
        konbini_pm_beta_1: "konbini_pm_beta_1",
        line_items_beta_1: "line_items_beta_1",
        oxxo_pm_beta_1: "oxxo_pm_beta_1",
        p24_pm_beta_1: "p24_pm_beta_1",
        paypal_pm_beta_1: "paypal_pm_beta_1",
        sepa_pm_beta_1: "sepa_pm_beta_1",
        sofort_pm_beta_1: "sofort_pm_beta_1",
        tax_product_beta_1: "tax_product_beta_1",
        wechat_pay_pm_beta_1: "wechat_pay_pm_beta_1",
        wechat_pay_pm_beta_2: "wechat_pay_pm_beta_2",
        checkout_beta_locales: "checkout_beta_locales",
        stripe_js_beta_locales: "stripe_js_beta_locales",
        ideal_sepa_beta_1: "ideal_sepa_beta_1",
        sofort_sepa_beta_1: "sofort_sepa_beta_1",
        bancontact_sepa_beta_1: "bancontact_sepa_beta_1",
        upi_beta_1: "upi_beta_1",
        issuing_elements_1: "issuing_elements_1",
        issuing_elements_2: "issuing_elements_2",
        return_intents_beta_1: "return_intents_beta_1",
        netbanking_beta_1: "netbanking_beta_1",
        eps_bank_beta_1: "eps_bank_beta_1",
        card_light_beta_1: "card_light_beta_1",
        no_card_light_beta_1: "no_card_light_beta_1",
        p24_bank_beta_1: "p24_bank_beta_1",
        netbanking_bank_beta_1: "netbanking_bank_beta_1",
        instant_debits_beta_1: "instant_debits_beta_1",
        link_beta_1: "link_beta_1",
        payment_element_beta_1: "payment_element_beta_1",
        identity_dialog_1: "identity_dialog_1",
        id_bank_transfer_beta_1: "id_bank_transfer_beta_1",
        linked_accounts_beta_1: "linked_accounts_beta_1",
        us_bank_account_beta_1: "us_bank_account_beta_1",
      },
      Ft = Object.freeze({
        netbankingBank: "netbanking_bank_beta_1",
        authentication: "link_beta_1",
        shippingAddress: "link_beta_1",
        payment: "payment_element_beta_1",
      }),
      Ut = Object.keys(qt),
      Ht = function (e, t) {
        return e.indexOf(t) >= 0;
      },
      Yt = !1,
      Gt = function (e) {
        Yt ||
          ("null" === (null != e ? e : window.origin) &&
            ((Yt = !0),
            console.error(
              "Stripe.js requires 'allow-same-origin' if sandboxed."
            )));
      },
      zt =
        ((mt = {}),
        Object(c.a)(mt, Q.b.card, {
          unique: !0,
          conflict: [
            Q.b.cardNumber,
            Q.b.cardExpiry,
            Q.b.cardCvc,
            Q.b.postalCode,
          ],
          beta: !1,
          implementation: "legacy",
        }),
        Object(c.a)(mt, Q.b.cardNumber, {
          unique: !0,
          conflict: [Q.b.card],
          beta: !1,
          implementation: "legacy",
        }),
        Object(c.a)(mt, Q.b.cardExpiry, {
          unique: !0,
          conflict: [Q.b.card],
          beta: !1,
          implementation: "legacy",
        }),
        Object(c.a)(mt, Q.b.cardCvc, {
          unique: !0,
          conflict: [Q.b.card],
          beta: !1,
          implementation: "legacy",
        }),
        Object(c.a)(mt, Q.b.postalCode, {
          unique: !0,
          conflict: [Q.b.card],
          beta: !1,
          implementation: "legacy",
        }),
        Object(c.a)(mt, Q.b.paymentRequestButton, {
          unique: !0,
          conflict: [],
          beta: !1,
          implementation: "legacy",
        }),
        Object(c.a)(mt, Q.b.iban, {
          unique: !0,
          conflict: [],
          beta: !1,
          implementation: "legacy",
        }),
        Object(c.a)(mt, Q.b.idealBank, {
          unique: !0,
          conflict: [],
          beta: !1,
          implementation: "legacy",
        }),
        Object(c.a)(mt, Q.b.p24Bank, {
          unique: !0,
          conflict: [],
          beta: !1,
          implementation: "legacy",
        }),
        Object(c.a)(mt, Q.b.auBankAccount, {
          unique: !0,
          beta: !1,
          conflict: [],
          implementation: "legacy",
        }),
        Object(c.a)(mt, Q.b.fpxBank, {
          unique: !0,
          beta: !1,
          conflict: [],
          implementation: "legacy",
        }),
        Object(c.a)(mt, Q.b.netbankingBank, {
          unique: !0,
          beta: !0,
          conflict: [],
          implementation: "legacy",
        }),
        Object(c.a)(mt, Q.b.issuingCardNumberDisplay, {
          unique: !1,
          beta: !0,
          conflict: [],
          implementation: "legacy",
        }),
        Object(c.a)(mt, Q.b.issuingCardCvcDisplay, {
          unique: !1,
          beta: !0,
          conflict: [],
          implementation: "legacy",
        }),
        Object(c.a)(mt, Q.b.issuingCardExpiryDisplay, {
          unique: !1,
          beta: !0,
          conflict: [],
          implementation: "legacy",
        }),
        Object(c.a)(mt, Q.b.epsBank, {
          unique: !0,
          conflict: [],
          beta: !0,
          implementation: "legacy",
        }),
        Object(c.a)(mt, Q.b.afterpayClearpayMessage, {
          unique: !1,
          conflict: [],
          beta: !1,
          implementation: "afterpay_message",
        }),
        Object(c.a)(mt, Q.b.authentication, {
          unique: !0,
          conflict: [],
          beta: !0,
          implementation: "frame",
        }),
        Object(c.a)(mt, Q.b.payment, {
          unique: !0,
          conflict: [],
          beta: !0,
          implementation: "frame",
        }),
        Object(c.a)(mt, Q.b.shippingAddress, {
          unique: !0,
          conflict: [],
          beta: !0,
          implementation: "frame",
        }),
        mt),
      Wt = "__PrivateStripeElement",
      Kt = ["brand"],
      Vt =
        ((_t = {}),
        Object(c.a)(_t, Q.b.card, Kt),
        Object(c.a)(_t, Q.b.cardNumber, Kt),
        Object(c.a)(_t, Q.b.iban, ["country", "bankName"]),
        Object(c.a)(_t, Q.b.auBankAccount, ["bankName", "branchName"]),
        _t),
      Jt =
        ((ht = {}),
        Object(c.a)(ht, Q.b.idealBank, { secondary: Q.b.idealBankSecondary }),
        Object(c.a)(ht, Q.b.p24Bank, { secondary: Q.b.p24BankSecondary }),
        Object(c.a)(ht, Q.b.fpxBank, { secondary: Q.b.fpxBankSecondary }),
        Object(c.a)(ht, Q.b.netbankingBank, {
          secondary: Q.b.netbankingBankSecondary,
        }),
        Object(c.a)(ht, Q.b.epsBank, { secondary: Q.b.epsBankSecondary }),
        ht),
      $t = n(8),
      Xt = n(12),
      Zt = "".concat(Wt, "-input"),
      Qt = "".concat(Wt, "-inputAfter"),
      en = "".concat(Wt, "-safariInput"),
      tn = "StripeElement",
      nn = ["ready", "focus", "blur", "escape", "change"],
      rn =
        ((yt = {}),
        Object(c.a)(yt, $t.a.authentication, Xt.a.AUTHENTICATION_ELEMENT),
        Object(c.a)(yt, $t.a.payment, Xt.a.PAYMENT_ELEMENT),
        Object(c.a)(yt, $t.a.shippingAddress, Xt.a.SHIPPING_ADDRESS_ELEMENT),
        yt),
      an = Object(c.a)(
        {},
        $t.a.authenticationPopover,
        Xt.a.AUTHENTICATION_POPOVER_ELEMENT
      ),
      on = !1,
      cn = {},
      sn = function (e, t) {
        return (
          document.activeElement === e._iframe ||
          (e._iframe.parentElement && document.activeElement === t)
        );
      },
      un = function (e) {
        return "object" == typeof e &&
          null !== e &&
          "IntegrationError" === e.name
          ? new u.a("string" == typeof e.message ? e.message : "")
          : e;
      },
      ln = (function () {
        function e(t) {
          var n = this;
          Object(a.a)(this, e),
            (this._sendCAReq = function (e) {
              var t = ne(e.tag);
              return new ce.a(function (r, a) {
                (n._requests[t] = { resolve: r, reject: a }),
                  n._controllerFrame.send({
                    action: "stripe-safe-controller-action-request",
                    payload: { nonce: t, caReq: e },
                  });
              });
            }),
            (this.keyMode = function () {
              return v(n._apiKey);
            }),
            (this.action = {
              retrievePaymentIntent: function (e) {
                return n._sendCAReq({
                  tag: "RETRIEVE_PAYMENT_INTENT",
                  value: e,
                });
              },
              confirmPaymentIntent: function (e) {
                return n._sendCAReq({
                  tag: "CONFIRM_PAYMENT_INTENT",
                  value: e,
                });
              },
              cancelPaymentIntentSource: function (e) {
                return n._sendCAReq({
                  tag: "CANCEL_PAYMENT_INTENT_SOURCE",
                  value: e,
                });
              },
              confirmSetupIntent: function (e) {
                return n._sendCAReq({ tag: "CONFIRM_SETUP_INTENT", value: e });
              },
              retrieveSetupIntent: function (e) {
                return n._sendCAReq({ tag: "RETRIEVE_SETUP_INTENT", value: e });
              },
              cancelSetupIntentSource: function (e) {
                return n._sendCAReq({
                  tag: "CANCEL_SETUP_INTENT_SOURCE",
                  value: e,
                });
              },
              lookupLocale: function (e) {
                return n._sendCAReq({ tag: "LOOKUP_LOCALE", value: e });
              },
              fetchLocale: function (e) {
                return n._sendCAReq({ tag: "FETCH_LOCALE", value: e });
              },
              updateCSSFonts: function (e) {
                return n._sendCAReq({ tag: "UPDATE_CSS_FONTS", value: e });
              },
              createApplePaySession: function (e) {
                return n._sendCAReq({
                  tag: "CREATE_APPLE_PAY_SESSION",
                  value: e,
                });
              },
              retrieveSource: function (e) {
                return n._sendCAReq({ tag: "RETRIEVE_SOURCE", value: e });
              },
              tokenizeWithElement: function (e) {
                return n._sendCAReq({ tag: "TOKENIZE_WITH_ELEMENT", value: e });
              },
              tokenizeCvcUpdate: function (e) {
                return n._sendCAReq({ tag: "TOKENIZE_CVC_UPDATE", value: e });
              },
              tokenizeWithData: function (e) {
                return n._sendCAReq({ tag: "TOKENIZE_WITH_DATA", value: e });
              },
              createSourceWithElement: function (e) {
                return n._sendCAReq({
                  tag: "CREATE_SOURCE_WITH_ELEMENT",
                  value: e,
                });
              },
              createSourceWithData: function (e) {
                return n._sendCAReq({
                  tag: "CREATE_SOURCE_WITH_DATA",
                  value: e,
                });
              },
              createPaymentMethodWithElement: function (e) {
                return n._sendCAReq({
                  tag: "CREATE_PAYMENT_METHOD_WITH_ELEMENT",
                  value: e,
                });
              },
              createPaymentMethodWithData: function (e) {
                return n._sendCAReq({
                  tag: "CREATE_PAYMENT_METHOD_WITH_DATA",
                  value: e,
                });
              },
              createPaymentPage: function (e) {
                return n._sendCAReq({ tag: "CREATE_PAYMENT_PAGE", value: e });
              },
              createPaymentPageWithSession: function (e) {
                return n._sendCAReq({
                  tag: "CREATE_PAYMENT_PAGE_WITH_SESSION",
                  value: e,
                });
              },
              createRadarSession: function (e) {
                return n._sendCAReq({ tag: "CREATE_RADAR_SESSION", value: e });
              },
              authenticate3DS2: function (e) {
                return n._sendCAReq({ tag: "AUTHENTICATE_3DS2", value: e });
              },
              verifyMicrodepositsForPayment: function (e) {
                return n._sendCAReq({
                  tag: "VERIFY_MICRODEPOSITS_FOR_PAYMENT",
                  value: e,
                });
              },
              verifyMicrodepositsForSetup: function (e) {
                return n._sendCAReq({
                  tag: "VERIFY_MICRODEPOSITS_FOR_SETUP",
                  value: e,
                });
              },
              retrieveIssuingCardWithoutNonce: function (e) {
                return n._sendCAReq({
                  tag: "RETRIEVE_ISSUING_CARD_WITHOUT_NONCE",
                  value: e,
                });
              },
              retrieveIssuingCard: function (e) {
                return n._sendCAReq({ tag: "RETRIEVE_ISSUING_CARD", value: e });
              },
              createEphemeralKeyNonce: function (e) {
                return n._sendCAReq({
                  tag: "CREATE_EPHEMERAL_KEY_NONCE",
                  value: e,
                });
              },
              updatePaymentIntent: function (e) {
                return n._sendCAReq({ tag: "UPDATE_PAYMENT_INTENT", value: e });
              },
              createAcssDebitSession: function (e) {
                return n._sendCAReq({
                  tag: "CREATE_ACSS_DEBIT_SESSION",
                  value: e,
                });
              },
              confirmReturnIntent: function (e) {
                return n._sendCAReq({ tag: "CONFIRM_RETURN_INTENT", value: e });
              },
              refreshPaymentIntent: function (e) {
                return n._sendCAReq({
                  tag: "REFRESH_PAYMENT_INTENT",
                  value: e,
                });
              },
              refreshSetupIntent: function (e) {
                return n._sendCAReq({ tag: "REFRESH_SETUP_INTENT", value: e });
              },
              localizeError: function (e) {
                return n._sendCAReq({ tag: "LOCALIZE_ERROR", value: e });
              },
              retrievePaymentMethodPreferences: function (e) {
                return n._sendCAReq({
                  tag: "RETRIEVE_PAYMENT_METHOD_PREFERENCES",
                  value: e,
                });
              },
            }),
            (this.createElementFrame = function (e, t, a, o) {
              var i = n._betas,
                c = new Ue({
                  type: e,
                  betas: i,
                  controllerId: n._id,
                  listenerRegistry: n._listenerRegistry,
                  appParams: Object(r.a)(
                    Object(r.a)({}, o),
                    {},
                    {
                      componentName: t,
                      keyMode: v(n._apiKey),
                      apiKey: n._apiKey,
                    }
                  ),
                });
              return n._setupFrame(c, e, a);
            }),
            (this.createSecondaryElementFrame = function (e, t, a, o, i) {
              var c = n._betas,
                s = new $e({
                  type: e,
                  betas: c,
                  controllerId: n._id,
                  listenerRegistry: n._listenerRegistry,
                  appParams: Object(r.a)(
                    Object(r.a)({}, i),
                    {},
                    {
                      componentName: t,
                      primaryElementType: a,
                      keyMode: v(n._apiKey),
                    }
                  ),
                });
              return n._setupFrame(s, e, o);
            }),
            (this.createHiddenFrame = function (e, t) {
              var r = new we({
                type: e,
                betas: n._betas,
                controllerId: n._id,
                listenerRegistry: n._listenerRegistry,
                appParams: t,
              });
              return n._setupFrame(r, e);
            }),
            (this.createLightboxFrame = function (e) {
              var t = e.type,
                a = e.options,
                o = new Ve({
                  type: t,
                  controllerId: n._id,
                  listenerRegistry: n._listenerRegistry,
                  options: Object(r.a)(
                    Object(r.a)({}, a),
                    {},
                    { betas: n._betas }
                  ),
                });
              return n._setupFrame(o, t);
            }),
            (this.getFlags = function () {
              return n._flags;
            }),
            (this._setupFrame = function (e, t, r) {
              return (
                (n._frames[e.id] = e),
                n._controllerFrame.sendPersistent({
                  action: "stripe-user-createframe",
                  payload: { newFrameId: e.id, frameType: t, groupId: r },
                }),
                e._on("unload", function () {
                  n._controllerFrame.sendPersistent({
                    action: "stripe-frame-unload",
                    payload: { unloadedFrameId: e.id },
                  });
                }),
                e._on("destroy", function () {
                  delete n._frames[e.id],
                    n._controllerFrame.sendPersistent({
                      action: "stripe-frame-destroy",
                      payload: { destroyedFrameId: e.id },
                    });
                }),
                e._on("load", function () {
                  n._controllerFrame.sendPersistent({
                    action: "stripe-frame-load",
                    payload: { loadedFrameId: e.id },
                  }),
                    n._controllerFrame.loaded &&
                      e.send({ action: "stripe-controller-load", payload: {} });
                }),
                e
              );
            }),
            (this.report = function (e) {
              var t =
                arguments.length > 1 && void 0 !== arguments[1]
                  ? arguments[1]
                  : {};
              n._controllerFrame.send({
                action: "stripe-controller-report",
                payload: { event: e, data: t },
              });
            }),
            (this.warn = function () {
              for (
                var e = arguments.length, t = new Array(e), r = 0;
                r < e;
                r++
              )
                t[r] = arguments[r];
              n._controllerFrame.send({
                action: "stripe-controller-warn",
                payload: { args: t },
              });
            }),
            (this.controllerFor = function () {
              return "outer";
            }),
            (this._setupPostMessage = function () {
              n._listenerRegistry.addEventListener(
                window,
                "message",
                function (e) {
                  var t = e.data,
                    r = e.origin,
                    a = e.source,
                    o = (function (e) {
                      try {
                        var t = "string" == typeof e ? JSON.parse(e) : e;
                        return t.__stripeJsV3 ? t : null;
                      } catch (e) {
                        return null;
                      }
                    })(t);
                  o && (Object(Xe.a)(Q.i, r) ? n._handleMessage(o, a) : Gt(r));
                }
              );
            }),
            (this._nodeIsKnownElement = function (e) {
              return (
                e &&
                "IFRAME" === e.nodeName &&
                !!n._frames[e.getAttribute("name") || ""]
              );
            }),
            (this._handleMessage = function (e, t) {
              var a = e.controllerId,
                o = e.frameId,
                i = e.message,
                c = n._frames[o];
              if (a === n._id)
                switch (i.action) {
                  case "stripe-frame-event":
                    var s = i.payload.event,
                      l = i.payload.data;
                    if (c) {
                      if (Re) {
                        var p = c._iframe.parentElement,
                          d = p && p.querySelector(".".concat(Zt));
                        if ("focus" === s && !on && d && !sn(c, d) && !cn[o]) {
                          d.focus(),
                            (on = !0),
                            (cn[o] = !0),
                            setTimeout(function () {
                              cn[o] = !1;
                            }, 1e3);
                          break;
                        }
                        if ("blur" === s && on) {
                          on = !1;
                          break;
                        }
                        "blur" === s &&
                          qe &&
                          setTimeout(function () {
                            var e = document.activeElement;
                            if (
                              e &&
                              !sn(c, d) &&
                              !Qe(e) &&
                              !n._nodeIsKnownElement(e)
                            ) {
                              var t = p && p.querySelector(".".concat(en));
                              if (t) {
                                var r = t;
                                (r.disabled = !1),
                                  r.focus(),
                                  r.blur(),
                                  (r.disabled = !0);
                              }
                              e.focus();
                            }
                          }, 400);
                      }
                      "load" === s &&
                        (l = Object(r.a)(
                          Object(r.a)({}, l),
                          {},
                          { source: t }
                        )),
                        c._emit(s, l);
                    }
                    break;
                  case "stripe-frame-action-response":
                    c && c.resolve(i.payload.nonce, i.payload.faRes);
                    break;
                  case "stripe-frame-action-error":
                    c && c.reject(i.payload.nonce, un(i.payload.faErr));
                    break;
                  case "stripe-frame-error":
                    throw new u.a(i.payload.message);
                  case "stripe-integration-error":
                    c &&
                      c._emit("__privateIntegrationError", {
                        message: i.payload.message,
                      });
                    break;
                  case "stripe-controller-load":
                    n._controllerFrame._emit("load", { source: t }),
                      n._loadCount++,
                      Object.keys(n._frames).forEach(function (e) {
                        return n._frames[e].send({
                          action: "stripe-controller-load",
                          payload: {},
                        });
                      });
                    var f = n._createTimestamp.getAsPosixTime(),
                      m = {
                        stripeJsLoad: n._stripeJsLoadTimestamp.getAsPosixTime(),
                        stripeCreate: f,
                        create: f,
                      };
                    n._mountTimestamp &&
                      (m.mount = n._mountTimestamp.getAsPosixTime()),
                      n._controllerFrame.send({
                        action: "stripe-user-mount",
                        payload: {
                          timestamps: m,
                          loadCount: n._loadCount,
                          matchFrame:
                            t === n._controllerFrame._iframe.contentWindow,
                          rtl: !1,
                          paymentRequestButtonType: null,
                        },
                      });
                    break;
                  case "stripe-safe-controller-action-response":
                    n._requests[i.payload.nonce] &&
                      n._requests[i.payload.nonce].resolve(i.payload.caRes);
                    break;
                  case "stripe-safe-controller-action-error":
                    n._requests[i.payload.nonce] &&
                      n._requests[i.payload.nonce].reject(un(i.payload.caErr));
                    break;
                  case "stripe-api-call":
                    Dt();
                }
            });
          var o,
            i = t.listenerRegistry,
            c = t.stripeJsLoadTimestamp,
            l = t.stripeCreateTimestamp,
            p = t.onFirstLoad,
            d = t.betas,
            f = s(t, [
              "listenerRegistry",
              "stripeJsLoadTimestamp",
              "stripeCreateTimestamp",
              "onFirstLoad",
              "betas",
            ]),
            m = f.apiKey,
            _ = f.stripeAccount,
            h = f.stripeJsId,
            y = f.locale;
          (this._id = ne("__privateStripeController")),
            (this._stripeJsId = h),
            (this._apiKey = m),
            (this._stripeAccount = _),
            (this._listenerRegistry = i),
            (this._betas = d),
            (this._flags = {
              cl:
                !Ht((o = d), "no_card_light_beta_1") &&
                (Ht(o, "card_light_beta_1") || Math.random() < 0),
              clc: Math.random() < 0,
            }),
            (this._controllerFrame = new Oe({
              type: Q.c.CONTROLLER,
              betas: d,
              controllerId: this._id,
              listenerRegistry: i,
              appParams: Object(r.a)(
                Object(r.a)({}, f),
                {},
                {
                  outerFlags: this._flags,
                  betas: d,
                  stripeJsLoadTime: c.getAsPosixTime(),
                }
              ),
            })),
            (this._stripeJsLoadTimestamp = c),
            (this._createTimestamp = l),
            (this._loadCount = 0);
          var b = function (e) {
            var t = e.anchor;
            (n._mountTimestamp = new Bt.a()),
              t !== document.body &&
                n.report("controller.mount.custom_container");
          };
          this._controllerFrame._isMounted()
            ? b({ anchor: this._controllerFrame._iframe.parentElement })
            : this._controllerFrame._once("mount", b),
            p && this._controllerFrame._once("load", p),
            (this._frames = {}),
            (this._requests = {}),
            this._setupPostMessage(),
            (this._handleMessage = fe(this._handleMessage, this)),
            this.action.fetchLocale({ locale: y || "auto" });
        }
        return (
          Object(o.a)(e, [
            {
              key: "registerWrapper",
              value: function (e) {
                this._controllerFrame.send({
                  action: "stripe-wrapper-register",
                  payload: { stripeWrapperLibrary: e },
                });
              },
            },
            {
              key: "registerAppInfo",
              value: function (e) {
                this._controllerFrame.send({
                  action: "stripe-app-info-register",
                  payload: { wrapperLibrary: e },
                });
              },
            },
          ]),
          e
        );
      })(),
      pn = function () {
        var e = document.querySelectorAll("meta[name=viewport][content]"),
          t = e[e.length - 1];
        return t && t instanceof HTMLMetaElement ? t.content : "";
      },
      dn = function (e) {
        return pn().match(e);
      },
      fn = n(33),
      mn = (function (e) {
        Object(ae.a)(n, e);
        var t = Object(oe.a)(n);
        function n() {
          var e;
          return (
            Object(a.a)(this, n),
            ((e = t.call(this)).name = "NetworkError"),
            (e.type = "network_error"),
            e
          );
        }
        return n;
      })(Object(fn.a)(Error)),
      _n = function e(t) {
        return new ce.a(function (n, a) {
          var o = t.method,
            i = t.url,
            c = t.data,
            s = t.headers,
            u = t.withCredentials,
            l = t.contentType,
            p = void 0 === l ? "application/x-www-form-urlencoded" : l,
            d = "";
          c && "application/x-www-form-urlencoded" === p
            ? (d = Object(ie.a)(c))
            : c && "application/json" === p && (d = JSON.stringify(c));
          var f = "GET" === o && d ? "".concat(i, "?").concat(d) : i,
            m = "GET" === o ? "" : d,
            _ = new XMLHttpRequest();
          u && (_.withCredentials = u),
            _.open(o, f, !0),
            _.setRequestHeader("Accept", "application/json"),
            _.setRequestHeader("Content-Type", p),
            s &&
              Object.keys(s).forEach(function (e) {
                var t = s[e];
                "string" == typeof t && _.setRequestHeader(e, t);
              }),
            (_.onreadystatechange = function () {
              4 === _.readyState &&
                ((_.onreadystatechange = function () {}),
                0 === _.status
                  ? u
                    ? a(new mn())
                    : e(
                        Object(r.a)(
                          Object(r.a)({}, t),
                          {},
                          { withCredentials: !0 }
                        )
                      ).then(n, a)
                  : n(_));
            });
          try {
            _.send(m);
          } catch (e) {
            a(e);
          }
        });
      },
      hn = function (e, t) {
        var n = e.reduce(function (e, n) {
          var a = (function (e, t) {
              var n = e.indexOf(":");
              if (-1 === n)
                throw new u.a(
                  "Invalid css declaration in file from "
                    .concat(t, ': "')
                    .concat(e, '"')
                );
              var r = e.slice(0, n).trim(),
                a = Q.a[r];
              if (!a)
                throw new u.a(
                  "Unsupported css property in file from "
                    .concat(t, ': "')
                    .concat(r, '"')
                );
              return { property: a, value: e.slice(n + 1).trim() };
            })(n, t),
            o = a.property,
            i = a.value;
          return Object(r.a)(Object(r.a)({}, e), {}, Object(c.a)({}, o, i));
        }, {});
        return (
          ["family", "src"].forEach(function (e) {
            if (!n[e])
              throw new u.a(
                "Missing css property in file from "
                  .concat(t, ': "')
                  .concat(Q.h[e], '"')
              );
          }),
          n
        );
      },
      yn = function (e) {
        return _n({ url: e, method: "GET" })
          .then(function (e) {
            return e.responseText;
          })
          .then(function (t) {
            return (function (e, t) {
              var n = e.match(/@font-face[ ]?{[^}]*}/g);
              if (!n)
                throw new u.a(
                  "No @font-face rules found in file from ".concat(t)
                );
              return n;
            })(t, e).map(function (t) {
              var n,
                r = (function (e, t) {
                  var n = e.replace(/\/\*.*\*\//g, "").trim(),
                    r = (
                      n.length && /;$/.test(n) ? n : "".concat(n, ";")
                    ).match(/((([^;(]*\([^()]*\)[^;)]*)|[^;]+)+)(?=;)/g);
                  if (!r)
                    throw new u.a(
                      "Found @font-face rule containing no valid font-properties in file from ".concat(
                        t
                      )
                    );
                  return r;
                })((n = t.match(/@font-face[ ]?{([^}]*)}/)) ? n[1] : "", e);
              return hn(r, e);
            });
          });
      },
      bn =
        ((bt = ["fil", "hr", "ko", "vi"]),
        function (e, t) {
          return Ht(t, qt.stripe_js_beta_locales) || -1 === bt.indexOf(e)
            ? e
            : "auto";
        }),
      vn = function (e, t) {
        var n,
          r =
            ("string" == typeof (n = e) &&
              Object(p.a)(Object.keys(zt), function (e) {
                return e === n;
              })) ||
            null;
        if (
          !r ||
          !(function (e, t) {
            var n = Ft[e];
            return !n || Ht(t, n);
          })(r, t)
        ) {
          var a = "string" == typeof e ? e : typeof e;
          throw new u.a(
            "A valid Element name must be provided. Valid Elements are:\n  "
              .concat(
                Object.keys(zt)
                  .filter(function (e) {
                    return !zt[e].beta;
                  })
                  .join(", "),
                "; you passed: "
              )
              .concat(a, ".")
          );
        }
      },
      gn = "1.2em",
      En = "14px",
      wn = function (e) {
        var t = e.split(" ").map(function (e) {
          return parseInt(e.trim(), 10);
        });
        return 1 === t.length || 2 === t.length
          ? 2 * t[0]
          : 3 === t.length || 4 === t.length
          ? t[0] + t[2]
          : 0;
      },
      On = function () {
        var e =
            arguments.length > 0 && void 0 !== arguments[0] ? arguments[0] : gn,
          t =
            arguments.length > 1 && void 0 !== arguments[1] ? arguments[1] : En,
          n =
            arguments.length > 2 && void 0 !== arguments[2]
              ? arguments[2]
              : "0",
          r = wn(n);
        if ("string" == typeof e && /^[0-9.]+px$/.test(e)) {
          var a = parseFloat(e.toString().replace(/[^0-9.]/g, ""));
          return "".concat(a + r, "px");
        }
        var o,
          i = parseFloat(e.toString().replace(/[^0-9.]/g, "")),
          c = parseFloat(En.replace(/[^0-9.]/g, "")),
          s = parseFloat(t.toString().replace(/[^0-9.]/g, ""));
        if ("string" == typeof t && /^(\d+|\d*\.\d+)px$/.test(t)) o = s;
        else if ("string" == typeof t && /^(\d+|\d*\.\d+)em$/.test(t))
          o = s * c;
        else if ("string" == typeof t && /^(\d+|\d*\.\d+)%$/.test(t))
          o = (s / 100) * c;
        else {
          if (
            "string" != typeof t ||
            (!/^[\d.]+$/.test(t) && !/^\d*\.(px|em|%)$/.test(t))
          )
            return "100%";
          o = c;
        }
        var u = i * o + r,
          l = "".concat(u, "px");
        return /^[0-9.]+px$/.test(l) ? l : "100%";
      },
      kn = n(27),
      jn = function (e, t) {
        return e.reduce(function (e, n) {
          return e.then(function (e) {
            return "SATISFIED" === e.type
              ? e
              : n().then(function (e) {
                  return t(e)
                    ? { type: "SATISFIED", value: e }
                    : { type: "UNSATISFIED" };
                });
          });
        }, ce.a.resolve({ type: "UNSATISFIED" }));
      },
      Pn = "40px",
      Sn = {
        success: "success",
        fail: "fail",
        invalid_shipping_address: "invalid_shipping_address",
      },
      Tn = { shipping: "shipping", delivery: "delivery", pickup: "pickup" },
      An = Object(r.a)(
        { success: "success" },
        {
          fail: "fail",
          invalid_payer_name: "invalid_payer_name",
          invalid_payer_email: "invalid_payer_email",
          invalid_payer_phone: "invalid_payer_phone",
          invalid_shipping_address: "invalid_shipping_address",
        }
      ),
      In = { merchantCapabilities: ["supports3DS"], displayItems: [] },
      Cn = $({
        amount: function (e, t) {
          return H(!0)(e, t);
        },
        label: D,
        pending: S(q),
      }),
      Nn = $({ amount: Y, label: D, pending: S(q) }),
      Rn = $({
        amount: Y,
        label: D,
        pending: S(q),
        id: B(D, function () {
          return ne("shippingOption");
        }),
        detail: B(D, function () {
          return "";
        }),
      }),
      Mn = N.apply(void 0, Object(i.a)(Object.keys(Tn))),
      Ln = $({ origin: D, name: D }),
      xn = $({
        displayItems: S(z(Nn)),
        shippingOptions: S(W("id")(z(Rn))),
        wallets: S(z(x)),
        disableWallets: S(z(x)),
        total: Cn,
        requestShipping: S(q),
        requestPayerName: S(q),
        requestPayerEmail: S(q),
        requestPayerPhone: S(q),
        shippingType: S(Mn),
        currency: L,
        country: M,
        jcbEnabled: S(q),
        __billingDetailsEmailOverride: S(D),
        __minApplePayVersion: S(F),
        __merchantDetails: S(Ln),
        __isCheckout: S(q),
        __betas: S(z(R.apply(void 0, Object(i.a)(Ut)))),
      }),
      Dn = J({
        currency: S(L),
        displayItems: S(z(Nn)),
        shippingOptions: S(W("id")(z(Rn))),
        total: S(Cn),
      }),
      Bn = $({
        displayItems: S(z(Nn)),
        shippingOptions: S(W("id")(z(Rn))),
        total: S(Cn),
        status: function (e, t) {
          return N.apply(void 0, Object(i.a)(Object.keys(Sn)))(
            -1 !==
              [
                "invalid_payer_name",
                "invalid_payer_email",
                "invalid_payer_phone",
              ].indexOf(e)
              ? "fail"
              : e,
            t
          );
        },
      }),
      qn = N.apply(void 0, Object(i.a)(Object.keys(An))),
      Fn = function () {
        return window.ApplePaySession
          ? ["APPLE_PAY"]
          : ["GOOGLE_PAY", "BROWSER"];
      },
      Un = function (e) {
        var t = [];
        return (
          window.ApplePaySession
            ? h(e, _.applePay) && t.push("APPLE_PAY")
            : (h(e, _.googlePay) &&
                (t.push("GOOGLE_PAY"), Me && t.push("BROWSER")),
              h(e, _.browserCard) &&
                -1 === t.indexOf("BROWSER") &&
                t.push("BROWSER")),
          t
        );
      },
      Hn = n(20),
      Yn = function () {
        try {
          return window.location.origin === window.top.location.origin;
        } catch (e) {
          return !1;
        }
      },
      Gn = Object(Hn.b)(function (e) {
        return window.ApplePaySession.canMakePaymentsWithActiveCard(e);
      }),
      zn = function (e) {
        if (!window.ApplePaySession) return !1;
        try {
          return window.ApplePaySession.supportsVersion(e);
        } catch (e) {
          return !1;
        }
      },
      Wn = ["mastercard", "visa"],
      Kn = [
        "AT",
        "AU",
        "BE",
        "CA",
        "CH",
        "DE",
        "DK",
        "EE",
        "ES",
        "FI",
        "FR",
        "GB",
        "GR",
        "HK",
        "IE",
        "IT",
        "JP",
        "LT",
        "LU",
        "LV",
        "MX",
        "NL",
        "NO",
        "NZ",
        "PL",
        "PT",
        "SE",
        "SG",
        "US",
      ],
      Vn = function (e, t) {
        var n = "US" === e || t ? ["discover", "diners", "jcb"].concat(Wn) : Wn;
        return -1 !== Kn.indexOf(e) ? ["amex"].concat(Object(i.a)(n)) : n;
      },
      Jn = {
        bif: 1,
        clp: 1,
        djf: 1,
        gnf: 1,
        jpy: 1,
        kmf: 1,
        krw: 1,
        mga: 1,
        pyg: 1,
        rwf: 1,
        vnd: 1,
        vuv: 1,
        xaf: 1,
        xof: 1,
        xpf: 1,
        bhd: 1e3,
        jod: 1e3,
        kwd: 1e3,
        omr: 1e3,
        tnd: 1e3,
      },
      $n = function (e, t) {
        var n = (function (e) {
            var t = Jn[e.toLowerCase()] || 100;
            return {
              unitSize: 1 / t,
              fractionDigits: Math.ceil(Math.log(t) / Math.log(10)),
            };
          })(t),
          r = n.unitSize,
          a = n.fractionDigits;
        return (e * r).toFixed(a);
      },
      Xn = function (e, t) {
        return {
          amount: $n(e.amount, t.currency),
          label: e.label,
          type: e.pending ? "pending" : "final",
        };
      },
      Zn = function (e, t) {
        return new window.ApplePayError(e, t);
      },
      Qn = function (e) {
        return function (t) {
          return t[e] && "string" == typeof t[e] ? t[e].toUpperCase() : null;
        };
      },
      er =
        ((vt = {}),
        Object(c.a)(vt, An.success, 0),
        Object(c.a)(vt, An.fail, 1),
        Object(c.a)(vt, An.invalid_payer_name, 2),
        Object(c.a)(vt, An.invalid_shipping_address, 3),
        Object(c.a)(vt, An.invalid_payer_phone, 4),
        Object(c.a)(vt, An.invalid_payer_email, 4),
        vt),
      tr =
        ((gt = {}),
        Object(c.a)(gt, An.success, function () {
          return null;
        }),
        Object(c.a)(gt, An.fail, function () {
          return null;
        }),
        Object(c.a)(gt, An.invalid_payer_name, function () {
          return Zn("billingContactInvalid", "name");
        }),
        Object(c.a)(gt, An.invalid_shipping_address, function () {
          return Zn("shippingContactInvalid", "postalAddress");
        }),
        Object(c.a)(gt, An.invalid_payer_phone, function () {
          return Zn("shippingContactInvalid", "phoneNumber");
        }),
        Object(c.a)(gt, An.invalid_payer_email, function () {
          return Zn("shippingContactInvalid", "emailAddress");
        }),
        gt),
      nr =
        ((Et = {}),
        Object(c.a)(Et, Tn.pickup, "storePickup"),
        Object(c.a)(Et, Tn.shipping, "shipping"),
        Object(c.a)(Et, Tn.delivery, "delivery"),
        Et),
      rr = {
        total: function (e) {
          return Xn(e.total, e);
        },
        lineItems: function (e) {
          return e.displayItems
            ? e.displayItems.map(function (t) {
                return Xn(t, e);
              })
            : [];
        },
        shippingMethods: function (e) {
          return e.shippingOptions
            ? e.shippingOptions.map(function (t) {
                return (function (e, t) {
                  return {
                    amount: $n(e.amount, t.currency),
                    label: e.label,
                    detail: e.detail,
                    identifier: e.id,
                  };
                })(t, e);
              })
            : [];
        },
        applicationData: function (e) {
          return e.applicationData || null;
        },
      },
      ar = {
        shippingType: function (e) {
          var t = e.shippingType;
          if (!t) return null;
          var n = nr[t];
          if (void 0 !== n) return n;
          throw new u.a("Invalid value for shippingType: ".concat(t));
        },
        requiredBillingContactFields: function (e) {
          return e.requestPayerName ? ["postalAddress"] : null;
        },
        requiredShippingContactFields: function (e) {
          var t = [];
          return (
            e.requestShipping && t.push("postalAddress"),
            e.requestPayerEmail && t.push("email"),
            e.requestPayerPhone && t.push("phone"),
            t.length ? t : null
          );
        },
        countryCode: Qn("country"),
        currencyCode: Qn("currency"),
        merchantCapabilities:
          ((wt = "merchantCapabilities"),
          function (e) {
            return e[wt] || null;
          }),
        supportedNetworks: function (e) {
          var t,
            n,
            r =
              ((t = e.country),
              (n = e.jcbEnabled || !1),
              Vn(t, n).reduce(function (e, t) {
                return "mastercard" === t
                  ? [].concat(Object(i.a)(e), ["masterCard"])
                  : "diners" === t
                  ? e
                  : [].concat(Object(i.a)(e), [t]);
              }, []));
          return zn(4) && r.push("maestro"), r;
        },
      },
      or = {
        status: function (e) {
          var t = er[e.status];
          return zn(3) && t > 1 ? 1 : t;
        },
        error: function (e) {
          return zn(3) ? tr[e.status]() : null;
        },
      },
      ir = Object(r.a)(Object(r.a)({}, rr), ar),
      cr = Object(r.a)(Object(r.a)({}, rr), or),
      sr = function (e) {
        return Object.keys(cr).reduce(function (t, n) {
          var a = (0, cr[n])(e);
          return null !== a
            ? Object(r.a)(Object(r.a)({}, t), {}, Object(c.a)({}, n, a))
            : t;
        }, {});
      },
      ur = function (e) {
        return "string" == typeof e ? e : null;
      },
      lr = function (e) {
        return e ? ur(e.phoneNumber) : null;
      },
      pr = function (e) {
        return e ? ur(e.emailAddress) : null;
      },
      dr = function (e) {
        return e
          ? [e.givenName, e.familyName]
              .filter(function (e) {
                return e && "string" == typeof e;
              })
              .join(" ")
          : null;
      },
      fr = function (e) {
        var t = e.addressLines,
          n = e.countryCode,
          r = e.postalCode,
          a = e.administrativeArea,
          o = e.locality,
          c = e.phoneNumber,
          s = ur(n);
        return {
          addressLine: Array.isArray(t)
            ? t.reduce(function (e, t) {
                return "string" == typeof t
                  ? [].concat(Object(i.a)(e), [t])
                  : e;
              }, [])
            : [],
          country: s ? s.toUpperCase() : "",
          postalCode: ur(r) || "",
          recipient: dr(e) || "",
          region: ur(a) || "",
          city: ur(o) || "",
          phone: ur(c) || "",
          sortingCode: "",
          dependentLocality: "",
          organization: "",
        };
      },
      mr = function (e, t) {
        var n = e.identifier,
          r = e.label;
        return t.filter(function (e) {
          return e.id === n && e.label === r;
        })[0];
      },
      _r = function (e, t) {
        var n = e.shippingContact,
          r = e.shippingMethod,
          a = e.billingContact;
        return {
          shippingOption:
            r && t.shippingOptions && t.shippingOptions.length
              ? mr(r, t.shippingOptions)
              : null,
          shippingAddress: n ? fr(n) : null,
          payerEmail: pr(n),
          payerPhone: lr(n),
          payerName: dr(a),
          walletName: "applePay",
          methodName: "apple-pay",
        };
      },
      hr = {
        austria: "AT",
        sterreich: "AT",
        csterreich: "AT",
        au: "AU",
        australia: "AU",
        belgium: "BE",
        br: "BR",
        brasil: "BR",
        brazil: "BR",
        ca: "CA",
        canada: "CA",
        ch: "CH",
        schweiz: "CH",
        switzerland: "CH",
        china: "CN",
        czechrepublic: "CZ",
        de: "DE",
        deutschland: "DE",
        germany: "DE",
        danmark: "DK",
        denmark: "DK",
        es: "ES",
        espaa: "ES",
        spain: "ES",
        finland: "FI",
        suomi: "FI",
        fr: "FR",
        hk: "HK",
        hongkong: "HK",
        england: "GB",
        gb: "GB",
        uk: "GB",
        unitedkingdom: "GB",
        scotland: "GB",
        wales: "GB",
        it: "IT",
        italy: "IT",
        italia: "IT",
        japan: "JP",
        lietuva: "LT",
        luxembourg: "LU",
        netherlands: "NL",
        nederland: "NL",
        norway: "NO",
        poland: "PL",
        polska: "PL",
        russia: "RU",
        saudiarabia: "SA",
        se: "SE",
        sweden: "SE",
        sverige: "SE",
        singapore: "SG",
        us: "US",
        usa: "US",
        unitedstatesofamerica: "US",
        unitedstates: "US",
        estadosunidos: "US",
      },
      yr = function (e, t) {
        return e && "object" == typeof e ? t(e) : null;
      },
      br = (function () {
        function e(t) {
          var n = this;
          Object(a.a)(this, e),
            (this._onEvent = function () {}),
            (this.setEventHandler = function (e) {
              n._onEvent = e;
            }),
            (this.canMakePayment = function () {
              return (function (e, t, n, r) {
                var a =
                    arguments.length > 4 && void 0 !== arguments[4]
                      ? arguments[4]
                      : 2,
                  o = Math.max(2, a);
                if (window.ApplePaySession) {
                  if (Yn()) {
                    if (window.ApplePaySession.supportsVersion(o)) {
                      var i = "merchant.".concat(
                        (t ? [e, t] : [e]).join("."),
                        ".stripe"
                      );
                      return Gn(i).then(function (a) {
                        if (
                          (r("pr.apple_pay.can_make_payment_native_response", {
                            available: a,
                          }),
                          n && !a && window.console)
                        ) {
                          var o = t
                            ? "or stripeAccount parameter (".concat(t, ") ")
                            : "";
                          window.console.warn(
                            "Either you do not have a card saved to your Wallet or the current domain ("
                              .concat(e, ") ")
                              .concat(
                                o,
                                "is not registered for Apple Pay. Visit https://dashboard.stripe.com/account/apple_pay to register this domain."
                              )
                          );
                        }
                        return a;
                      });
                    }
                    return (
                      n &&
                        window.console &&
                        window.console.warn(
                          "This version of Safari does not support ApplePay JS version ".concat(
                            o,
                            "."
                          )
                        ),
                      ce.a.resolve(!1)
                    );
                  }
                  return ce.a.resolve(!1);
                }
                return ce.a.resolve(!1);
              })(
                window.location.hostname,
                n._authentication.accountId,
                v(n._authentication.apiKey) === b.test,
                n._report,
                n._minimumVersion
              );
            }),
            (this.update = function (e) {
              (n._initialPaymentRequest = dt(n._paymentRequestOptions, e)),
                n._initializeSessionState();
            }),
            (this.show = function () {
              var e, t, a;
              n._initializeSessionState();
              try {
                e = new window.ApplePaySession(
                  n._minimumVersion,
                  ((t = n._paymentRequestOptions),
                  (a = Object(r.a)(Object(r.a)({}, In), t)),
                  Object.keys(ir).reduce(function (e, t) {
                    var n = (0, ir[t])(a);
                    return null !== n
                      ? Object(r.a)(
                          Object(r.a)({}, e),
                          {},
                          Object(c.a)({}, t, n)
                        )
                      : e;
                  }, {}))
                );
              } catch (e) {
                throw "Must create a new ApplePaySession from a user gesture handler." ===
                  e.message
                  ? new u.a(
                      "show() must be called from a user gesture handler (such as a click handler, after the user clicks a button)."
                    )
                  : e;
              }
              (n._privateSession = e),
                n._setupSession(e, n._usesButtonElement()),
                e.begin(),
                (n._isShowing = !0);
            }),
            (this.abort = function () {
              n._privateSession && n._privateSession.abort();
            }),
            (this._warn = function (e) {}),
            (this._report = function (e, t) {
              n._controller.report(
                e,
                Object(r.a)(
                  Object(r.a)({}, t),
                  {},
                  {
                    backingLibrary: "APPLE_PAY",
                    usesButtonElement: n._usesButtonElement(),
                  }
                )
              );
            }),
            (this._validateMerchant = function (e, t) {
              return function (r) {
                n._controller.action
                  .createApplePaySession({
                    data: {
                      validation_url: r.validationURL,
                      domain_name: window.location.hostname,
                      display_name: n._paymentRequestOptions.total.label,
                    },
                    usesButtonElement: t,
                  })
                  .then(function (t) {
                    if (n._isShowing)
                      switch (t.type) {
                        case "object":
                          e.completeMerchantValidation(
                            JSON.parse(t.object.session)
                          );
                          break;
                        case "error":
                          n._handleValidationError(e)(t.error);
                          break;
                        default:
                          Object(l.a)(t);
                      }
                  }, n._handleValidationError(e));
              };
            }),
            (this._handleValidationError = function (e) {
              return function (t) {
                n._report("error.pr.apple_pay.session_creation_failed", {
                  error: t,
                }),
                  e.abort();
                var r = t.message;
                "string" == typeof r && n._controller.warn(r);
              };
            }),
            (this._paymentAuthorized = function (e) {
              return function (t) {
                var a = t.payment,
                  o = n._usesButtonElement() ? Q.b.paymentRequestButton : null;
                n._controller.action
                  .tokenizeWithData({
                    type: "apple_pay",
                    elementName: o,
                    tokenData: Object(r.a)(
                      Object(r.a)({}, a),
                      {},
                      {
                        billingContact: yr(
                          a.billingContact,
                          n._normalizeContact
                        ),
                      }
                    ),
                    mids: n._mids,
                  })
                  .then(function (t) {
                    if ("error" === t.type)
                      e.completePayment(window.ApplePaySession.STATUS_FAILURE),
                        n._report("error.pr.create_token_failed", {
                          error: t.error,
                        });
                    else {
                      var o = yr(a.shippingContact, n._normalizeContact),
                        i = yr(a.billingContact, n._normalizeContact);
                      o &&
                        n._paymentRequestOptions.requestShipping &&
                        !o.countryCode &&
                        e.completePayment(
                          window.ApplePaySession
                            .STATUS_INVALID_SHIPPING_POSTAL_ADDRESS
                        );
                      var c = _r(
                        { shippingContact: o, billingContact: i },
                        n._paymentRequestOptions
                      );
                      n._onToken(e)(
                        Object(r.a)(
                          Object(r.a)({}, c),
                          {},
                          {
                            shippingOption: n._privateShippingOption,
                            token: t.object,
                          }
                        )
                      );
                    }
                  });
              };
            }),
            (this._normalizeContact = function (e) {
              if (e.country && "string" == typeof e.country) {
                var t,
                  a = e.country.toLowerCase().replace(/[^a-z]+/g, "");
                return (
                  e.countryCode
                    ? "string" == typeof e.countryCode &&
                      (t = e.countryCode.toUpperCase())
                    : (t = hr[a]) ||
                      n._report("warn.pr.apple_pay.missing_country_code", {
                        country: e.country,
                      }),
                  Object(r.a)(Object(r.a)({}, e), {}, { countryCode: t })
                );
              }
              return e;
            }),
            (this._onToken = function (e) {
              return function (t) {
                n._onEvent({
                  type: "paymentresponse",
                  payload: Object(r.a)(
                    Object(r.a)({}, t),
                    {},
                    { complete: de(n._completePayment(e)) }
                  ),
                });
              };
            }),
            (this._completePayment = function (e) {
              return function (t) {
                n._paymentRequestOptions = dt(n._paymentRequestOptions, {
                  status: t,
                });
                var r = sr(n._paymentRequestOptions),
                  a = r.status,
                  o = r.error;
                n._isShowing &&
                  (o
                    ? e.completePayment({ status: a, errors: [o] })
                    : e.completePayment(a)),
                  (0 === a || (1 === a && null == o)) &&
                    ((n._isShowing = !1),
                    n._onEvent && n._onEvent({ type: "close" }));
              };
            }),
            (this._shippingContactSelected = function (e) {
              return function (t) {
                n._onEvent({
                  type: "shippingaddresschange",
                  payload: {
                    shippingAddress: fr(n._normalizeContact(t.shippingContact)),
                    updateWith: de(n._completeShippingContactSelection(e)),
                  },
                });
              };
            }),
            (this._completeShippingContactSelection = function (e) {
              return function (t) {
                var r;
                (n._paymentRequestOptions = dt(n._paymentRequestOptions, t)),
                  (null === (r = n._paymentRequestOptions.shippingOptions) ||
                  void 0 === r
                    ? void 0
                    : r.length) &&
                    (n._privateShippingOption =
                      n._paymentRequestOptions.shippingOptions[0]);
                var a = sr(n._paymentRequestOptions),
                  o = a.status,
                  i = a.shippingMethods,
                  c = a.total,
                  s = a.lineItems;
                e.completeShippingContactSelection(o, i, c, s);
              };
            }),
            (this._shippingMethodSelected = function (e) {
              return function (t) {
                if (n._paymentRequestOptions.shippingOptions) {
                  var r = mr(
                    t.shippingMethod,
                    n._paymentRequestOptions.shippingOptions
                  );
                  (n._privateShippingOption = r),
                    n._onEvent({
                      type: "shippingoptionchange",
                      payload: {
                        shippingOption: r,
                        updateWith: de(n._completeShippingMethodSelection(e)),
                      },
                    });
                }
              };
            }),
            (this._completeShippingMethodSelection = function (e) {
              return function (t) {
                n._paymentRequestOptions = dt(n._paymentRequestOptions, t);
                var r = sr(n._paymentRequestOptions),
                  a = r.status,
                  o = r.total,
                  i = r.lineItems;
                e.completeShippingMethodSelection(a, o, i);
              };
            });
          var o = t.controller,
            i = t.authentication,
            s = t.mids,
            p = t.options,
            d = t.usesButtonElement,
            f = t.listenerRegistry;
          (this._controller = o),
            (this._authentication = i),
            (this._mids = s),
            (this._minimumVersion = p.__minApplePayVersion || 2),
            (this._usesButtonElement = d),
            (this._listenerRegistry = f),
            (this._initialPaymentRequest = p),
            (this._isShowing = !1),
            this._initializeSessionState();
        }
        return (
          Object(o.a)(e, [
            {
              key: "_initializeSessionState",
              value: function () {
                var e = btoa(
                  this._authentication.accountId
                    ? ""
                        .concat(this._authentication.apiKey, ":")
                        .concat(this._authentication.accountId)
                    : this._authentication.apiKey
                );
                (this._paymentRequestOptions = Object(r.a)(
                  Object(r.a)(Object(r.a)({}, In), this._initialPaymentRequest),
                  {},
                  { status: An.success, applicationData: e }
                )),
                  (this._privateSession = null),
                  (this._privateShippingOption = null);
                var t = this._paymentRequestOptions.shippingOptions;
                (null == t ? void 0 : t.length) &&
                  (this._privateShippingOption = t[0]);
              },
            },
            {
              key: "_setupSession",
              value: function (e, t) {
                var n = this;
                this._listenerRegistry.addEventListener(
                  e,
                  "validatemerchant",
                  de(this._validateMerchant(e, t))
                ),
                  this._listenerRegistry.addEventListener(
                    e,
                    "paymentauthorized",
                    de(this._paymentAuthorized(e))
                  ),
                  this._listenerRegistry.addEventListener(
                    e,
                    "cancel",
                    de(function () {
                      (n._isShowing = !1),
                        n._onEvent({ type: "cancel" }),
                        n._onEvent({ type: "close" });
                    })
                  ),
                  this._listenerRegistry.addEventListener(
                    e,
                    "shippingcontactselected",
                    de(this._shippingContactSelected(e))
                  ),
                  this._listenerRegistry.addEventListener(
                    e,
                    "shippingmethodselected",
                    de(this._shippingMethodSelected(e))
                  );
              },
            },
          ]),
          e
        );
      })(),
      vr = null;
    var gr,
      Er,
      wr,
      Or = function (e) {
        return null !== vr
          ? ce.a.resolve(vr)
          : e().then(function (e) {
              return (vr = e);
            });
      },
      kr = function (e) {
        return (
          !(!De && !Be) &&
          !(!e.isCheckout && !window.PaymentRequest) &&
          !(!e.isCheckout && Me)
        );
      },
      jr = function e(t) {
        var n = this;
        Object(a.a)(this, e),
          (this._mids = null),
          (this._frame = null),
          (this._initFrame = function (e) {
            var t = n._controller.createHiddenFrame(
              Q.c.PAYMENT_REQUEST_GOOGLE_PAY,
              {
                authentication: n._authentication,
                mids: n._mids,
                origin: n._origin,
              }
            );
            t.send({ action: "stripe-pr-initialize", payload: { data: e } }),
              n._initFrameEventHandlers(t),
              (n._frame = t);
          }),
          (this._initFrameEventHandlers = function (e) {
            e._on("pr-cancel", function () {
              n._onEvent({ type: "cancel" });
            }),
              e._on("pr-close", function () {
                n._backdrop.fadeOut().then(function () {
                  n._backdrop.unmount();
                }),
                  n._onEvent({ type: "close" });
              }),
              e._on("pr-error", function (e) {
                n._onEvent({
                  type: "error",
                  payload: {
                    errorMessage: e.errorMessage,
                    errorCode: e.errorCode,
                  },
                });
              }),
              e._on("pr-callback", function (t) {
                var r = t.event,
                  a = t.options,
                  o = t.nonce;
                switch (r) {
                  case "paymentresponse":
                    n._handlePaymentResponse(e, a, o);
                    break;
                  case "shippingaddresschange":
                    n._handleShippingAddressChange(e, a, o);
                    break;
                  case "shippingoptionchange":
                    n._handleShippingOptionChange(e, a, o);
                    break;
                  default:
                    throw new Error("Unexpected event name: ".concat(r));
                }
              });
          }),
          (this._handlePaymentResponse = function (e, t, a) {
            n._onEvent({
              type: "paymentresponse",
              payload: Object(r.a)(
                Object(r.a)({}, t),
                {},
                {
                  complete: function (t) {
                    e.send({
                      action: "stripe-pr-callback-complete",
                      payload: { nonce: a, data: { status: t } },
                    });
                  },
                }
              ),
            });
          }),
          (this._handleShippingAddressChange = function (e, t, a) {
            n._onEvent({
              type: "shippingaddresschange",
              payload: Object(r.a)(
                Object(r.a)({}, t),
                {},
                {
                  updateWith: function (t) {
                    e.send({
                      action: "stripe-pr-callback-complete",
                      payload: { nonce: a, data: t },
                    });
                  },
                }
              ),
            });
          }),
          (this._handleShippingOptionChange = function (e, t, a) {
            n._onEvent({
              type: "shippingoptionchange",
              payload: Object(r.a)(
                Object(r.a)({}, t),
                {},
                {
                  updateWith: function (t) {
                    e.send({
                      action: "stripe-pr-callback-complete",
                      payload: { nonce: a, data: t },
                    });
                  },
                }
              ),
            });
          }),
          (this.setEventHandler = function (e) {
            n._onEvent = e;
          }),
          (this.canMakePayment = function () {
            if (!kr({ isCheckout: n._isCheckout })) return ce.a.resolve(!1);
            if (!n._frame) throw new Error("Frame not initialized.");
            var e = n._frame;
            return Or(function () {
              return e.action.checkCanMakePayment().then(function (e) {
                return !0 === e.available;
              });
            });
          }),
          (this.show = function () {
            n._frame &&
              (n._frame.send({
                action: "stripe-pr-show",
                payload: {
                  data: { usesButtonElement: n._usesButtonElement() },
                },
              }),
              n._backdrop.mount(),
              n._backdrop.show(),
              n._backdrop.fadeIn());
          }),
          (this.update = function (e) {
            n._frame &&
              n._frame.send({
                action: "stripe-pr-update",
                payload: { data: e },
              });
          }),
          (this.abort = function () {
            n._frame &&
              n._frame.send({ action: "stripe-pr-abort", payload: {} });
          }),
          (this._controller = t.controller),
          (this._authentication = t.authentication),
          (this._mids = t.mids),
          (this._origin = t.origin),
          (this._usesButtonElement = t.usesButtonElement),
          (this._backdrop = new We({
            lockScrolling: !1,
            lockFocus: !0,
            lockFocusOn: null,
            listenerRegistry: t.listenerRegistry,
          })),
          (this._isCheckout = !!t.options.__isCheckout),
          kr({ isCheckout: this._isCheckout }) &&
            this._controller &&
            (this._controller.action.fetchLocale({ locale: "auto" }),
            this._initFrame(t.options));
      },
      Pr = (function () {
        if (!window.PaymentRequest) return null;
        if (/CriOS\/59/.test(navigator.userAgent)) return null;
        if (/.*\(.*; wv\).*Chrome\/(?:53|54)\.\d.*/g.test(navigator.userAgent))
          return null;
        if (xe) return null;
        var e = window.PaymentRequest;
        return (
          e.prototype.canMakePayment ||
            (e.prototype.canMakePayment = function () {
              return ce.a.resolve(!1);
            }),
          e
        );
      })(),
      Sr = null,
      Tr = function e(t) {
        var n = this;
        Object(a.a)(this, e),
          (this._onEvent = function () {}),
          (this.setEventHandler = function (e) {
            n._onEvent = e;
          }),
          (this.canMakePayment = function () {
            return (
              (e = n._prFrame),
              v(n._authentication.apiKey),
              null !== Sr
                ? ce.a.resolve(Sr)
                : Pr && e
                ? e.action.checkCanMakePayment().then(function (e) {
                    var t = e.available;
                    return (Sr = !0 === t);
                  })
                : ce.a.resolve(!1)
            );
            var e;
          }),
          (this.update = function (e) {
            var t = n._prFrame;
            t && t.send({ action: "stripe-pr-update", payload: { data: e } });
          }),
          (this.show = function () {
            if (!n._prFrame)
              throw new u.a(
                "Payment Request is not available in this browser."
              );
            n._prFrame.send({
              action: "stripe-pr-show",
              payload: { data: { usesButtonElement: n._usesButtonElement() } },
            });
          }),
          (this.abort = function () {
            n._prFrame &&
              n._prFrame.send({ action: "stripe-pr-abort", payload: {} });
          }),
          (this._setupPrFrame = function (e, t) {
            e.send({ action: "stripe-pr-initialize", payload: { data: t } }),
              e._on("pr-cancel", function () {
                n._onEvent({ type: "cancel" });
              }),
              e._on("pr-close", function () {
                n._onEvent({ type: "close" });
              }),
              e._on("pr-error", function (e) {
                n._onEvent({
                  type: "error",
                  payload: {
                    errorMessage: e.message || "",
                    errorCode: e.code || "",
                  },
                });
              }),
              e._on("pr-callback", function (t) {
                var a = t.event,
                  o = t.nonce,
                  i = t.options;
                switch (a) {
                  case "token":
                    n._onEvent({
                      type: "paymentresponse",
                      payload: Object(r.a)(
                        Object(r.a)({}, i),
                        {},
                        {
                          complete: function (t) {
                            e.send({
                              action: "stripe-pr-callback-complete",
                              payload: { data: { status: t }, nonce: o },
                            });
                          },
                        }
                      ),
                    });
                    break;
                  case "shippingaddresschange":
                    n._onEvent({
                      type: "shippingaddresschange",
                      payload: {
                        shippingAddress: i.shippingAddress,
                        updateWith: function (t) {
                          e.send({
                            action: "stripe-pr-callback-complete",
                            payload: { nonce: o, data: t },
                          });
                        },
                      },
                    });
                    break;
                  case "shippingoptionchange":
                    n._onEvent({
                      type: "shippingoptionchange",
                      payload: {
                        shippingOption: i.shippingOption,
                        updateWith: function (t) {
                          e.send({
                            action: "stripe-pr-callback-complete",
                            payload: { nonce: o, data: t },
                          });
                        },
                      },
                    });
                    break;
                  default:
                    throw new Error(
                      "Unexpected event from PaymentRequest inner: ".concat(a)
                    );
                }
              });
          });
        var o = t.authentication,
          i = t.controller,
          c = t.mids,
          s = t.origin,
          l = t.usesButtonElement,
          p = t.options;
        if (
          ((this._authentication = o),
          (this._controller = i),
          (this._usesButtonElement = l),
          Pr && "https:" === window.location.protocol)
        ) {
          this._controller.action.fetchLocale({ locale: "auto" });
          var d = this._controller.createHiddenFrame(
            Q.c.PAYMENT_REQUEST_BROWSER,
            { authentication: o, mids: c, origin: s }
          );
          this._setupPrFrame(d, p), (this._prFrame = d);
        } else this._prFrame = null;
      },
      Ar = (function (e) {
        Object(ae.a)(n, e);
        var t = Object(oe.a)(n);
        function n(e) {
          var o;
          Object(a.a)(this, n),
            ((o = t.call(this))._usedByButtonElement = null),
            (o._showCalledByButtonElement = !1),
            (o._isShowing = !1),
            (o._backingLibraries = {
              APPLE_PAY: null,
              GOOGLE_PAY: null,
              BROWSER: null,
            }),
            (o._activeBackingLibraryName = null),
            (o._buttonTypeName = null),
            (o._activeBackingLibrary = null),
            (o._isCustomizedQueryStrategy = !1),
            (o._canMakePaymentAvailability = {
              APPLE_PAY: null,
              GOOGLE_PAY: null,
              BROWSER: null,
            }),
            (o._canMakePaymentResolved = !1),
            (o._validateUserOn = function (e, t) {
              "string" == typeof e &&
                (("source" === e &&
                  o._hasRegisteredListener("paymentmethod")) ||
                  ("paymentmethod" === e &&
                    o._hasRegisteredListener("source"))) &&
                (o._report("pr.double_callback_registration"),
                o._controller.warn(
                  "Do not register event listeners for both `source` or `paymentmethod`. Only one of them will succeed."
                ));
            }),
            (o._report = function (e, t) {
              o._controller.report(
                e,
                Object(r.a)(
                  Object(r.a)({}, t),
                  {},
                  {
                    activeBackingLibrary: o._activeBackingLibraryName,
                    usesButtonElement: o._usedByButtonElement || !1,
                  }
                )
              );
            }),
            (o._warn = function (e) {
              o._controller.warn(e);
            }),
            (o._registerElement = function () {
              o._usedByButtonElement = !0;
            }),
            (o._elementShow = function () {
              (o._showCalledByButtonElement = !0), o.show();
            }),
            (o._initBackingLibraries = function (e) {
              o._queryStrategy.forEach(function (t) {
                var n = {
                  controller: o._controller,
                  authentication: o._authentication,
                  mids: o._mids,
                  origin: window.location.origin,
                  options: e,
                  usesButtonElement: function () {
                    return !0 === o._usedByButtonElement;
                  },
                  listenerRegistry: o._listenerRegistry,
                };
                switch (t) {
                  case "APPLE_PAY":
                    (o._backingLibraries.APPLE_PAY = new br(n)),
                      o._backingLibraries.APPLE_PAY.setEventHandler(
                        o._handleInternalEvent
                      );
                    break;
                  case "GOOGLE_PAY":
                    (o._backingLibraries.GOOGLE_PAY = new jr(n)),
                      o._backingLibraries.GOOGLE_PAY.setEventHandler(
                        o._handleInternalEvent
                      );
                    break;
                  case "BROWSER":
                    (o._backingLibraries.BROWSER = new Tr(n)),
                      o._backingLibraries.BROWSER.setEventHandler(
                        o._handleInternalEvent
                      );
                    break;
                  default:
                    Object(l.a)(t);
                }
              });
            }),
            (o._handleInternalEvent = function (e) {
              switch (e.type) {
                case "paymentresponse":
                  o._emitPaymentResponse(e.payload);
                  break;
                case "error":
                  o._report("error.pr.internal_error", { error: e.payload });
                  break;
                case "close":
                  o._isShowing = !1;
                  break;
                default:
                  o._emitExternalEvent(e);
              }
            }),
            (o._emitExternalEvent = function (e) {
              switch (e.type) {
                case "cancel":
                  o._emit("cancel");
                  break;
                case "shippingoptionchange":
                case "shippingaddresschange":
                  var t = e.type,
                    n = e.payload,
                    a = null,
                    i = !1,
                    c = !1,
                    p = function (r) {
                      if (c && i)
                        return (
                          o._report("pr.update_with_called_after_timeout", {
                            event: t,
                          }),
                          void o._controller.warn(
                            "Call to updateWith() was ignored because it has already timed out. Please ensure that updateWith is called within 30 seconds."
                          )
                        );
                      if (i)
                        return (
                          o._report("pr.update_with_double_call", { event: t }),
                          void o._controller.warn(
                            "Call to updateWith() was ignored because it has already been called. Do not call updateWith more than once."
                          )
                        );
                      a && clearTimeout(a),
                        (i = !0),
                        o._report("pr.update_with", { event: t });
                      var l = Z(Bn, r || {}, "".concat(t, " callback")),
                        p = l.value;
                      l.warnings.forEach(function (e) {
                        return o._controller.warn(e);
                      });
                      var d = p,
                        f = !1;
                      if (
                        o._initialOptions.__isCheckout &&
                        "APPLE_PAY" === o._activeBackingLibraryName &&
                        p.shippingOptions &&
                        1 === p.shippingOptions.length &&
                        0 === p.shippingOptions[0].amount
                      ) {
                        p.shippingOptions;
                        (d = s(p, ["shippingOptions"])), (f = !0);
                      }
                      var m =
                        p.shippingOptions || o._initialOptions.shippingOptions;
                      if (
                        !(
                          f ||
                          "shippingaddresschange" !== e.type ||
                          p.status !== An.success ||
                          (m && m.length)
                        )
                      )
                        throw new u.a(
                          "When requesting shipping information, you must specify shippingOptions once a shipping address is selected.\nEither provide shippingOptions in stripe.paymentRequest(...) or listen for the shippingaddresschange event and provide shippingOptions to the updateWith callback there."
                        );
                      n.updateWith(d);
                    };
                  o._hasRegisteredListener(e.type)
                    ? ((a = setTimeout(function () {
                        (c = !0),
                          o._report("pr.update_with_timed_out", { event: t }),
                          o._controller.warn(
                            'Timed out waiting for a call to updateWith(). If you listen to "'
                              .concat(
                                e.type,
                                '" events, then you must call event.updateWith in the "'
                              )
                              .concat(e.type, '" handler within 30 seconds.')
                          ),
                          p({ status: "fail" });
                      }, 29900)),
                      o._emit(
                        t,
                        Object(r.a)(Object(r.a)({}, n), {}, { updateWith: p })
                      ))
                    : p({ status: "success" });
                  break;
                case "token":
                case "source":
                case "paymentmethod":
                  var d = e.type,
                    f = e.payload,
                    m = null,
                    _ = !1,
                    h = !1,
                    y = function (e) {
                      if (_ && h)
                        return (
                          o._report("pr.complete_called_after_timeout"),
                          void o._controller.warn(
                            "Call to complete() was ignored because it has already timed out. Please ensure that complete is called within 30 seconds."
                          )
                        );
                      if (h)
                        return (
                          o._report("pr.complete_double_call"),
                          void o._controller.warn(
                            "Call to complete() was ignored because it has already been called. Do not call complete more than once."
                          )
                        );
                      m && clearTimeout(m), (h = !0);
                      var t = Z(qn, e, "status for PaymentRequest completion"),
                        n = t.value;
                      t.warnings.forEach(function (e) {
                        return o._controller.warn(e);
                      }),
                        f.complete(n);
                    };
                  (m = setTimeout(function () {
                    (_ = !0),
                      o._report("pr.complete_timed_out"),
                      o._controller.warn(
                        'Timed out waiting for a call to complete(). Once you have processed the payment in the "'.concat(
                          e.type,
                          '" handler, you must call event.complete within 30 seconds.'
                        )
                      ),
                      y("fail");
                  }, 29900)),
                    o._emit(
                      d,
                      Object(r.a)(Object(r.a)({}, f), {}, { complete: y })
                    );
                  break;
                default:
                  Object(l.a)(e);
              }
            }),
            (o._maybeEmitPaymentResponse = function (e) {
              o._isShowing && o._emitExternalEvent(e);
            }),
            (o._emitPaymentResponse = function (e) {
              o._report("pr.payment_authorized");
              var t = e.token,
                n = s(e, ["token"]),
                a = n.payerEmail,
                i = n.payerPhone,
                c = n.complete,
                u = o._showCalledByButtonElement
                  ? Q.b.paymentRequestButton
                  : null;
              o._hasRegisteredListener("token") &&
                o._maybeEmitPaymentResponse({ type: "token", payload: e }),
                o._hasRegisteredListener("source") &&
                  o._controller.action
                    .createSourceWithData({
                      elementName: u,
                      type: "card",
                      sourceData: {
                        token: t.id,
                        owner: {
                          email:
                            o._initialOptions.__billingDetailsEmailOverride ||
                            a,
                          phone: i,
                        },
                      },
                      mids: null,
                    })
                    .then(function (e) {
                      "error" === e.type
                        ? e.error.code && "email_invalid" === e.error.code
                          ? c("invalid_payer_email")
                          : (o._report("fatal.pr.token_to_source_failed", {
                              error: e.error,
                              token: t.id,
                            }),
                            c("fail"))
                        : o._maybeEmitPaymentResponse({
                            type: "source",
                            payload: Object(r.a)(
                              Object(r.a)({}, n),
                              {},
                              { source: e.object }
                            ),
                          });
                    }),
                o._hasRegisteredListener("paymentmethod") &&
                  o._controller.action
                    .createPaymentMethodWithData({
                      elementName: u,
                      type: "card",
                      paymentMethodData: {
                        card: { token: t.id },
                        billing_details: {
                          email:
                            o._initialOptions.__billingDetailsEmailOverride ||
                            a,
                          phone: i,
                        },
                      },
                      mids: null,
                    })
                    .then(function (e) {
                      "error" === e.type
                        ? e.error.code && "email_invalid" === e.error.code
                          ? c("invalid_payer_email")
                          : (o._report(
                              "fatal.pr.token_to_payment_method_failed",
                              { error: e.error, token: t.id }
                            ),
                            c("fail"))
                        : o._maybeEmitPaymentResponse({
                            type: "paymentmethod",
                            payload: Object(r.a)(
                              Object(r.a)({}, n),
                              {},
                              { paymentMethod: e.object }
                            ),
                          });
                    });
            }),
            (o._canMakePaymentForBackingLibrary = function (e) {
              var t = o._backingLibraries[e];
              if (!t)
                throw new Error(
                  "Unexpectedly calling canMakePayment on uninitialized backing library."
                );
              return ce.a
                .race([
                  new ce.a(function (e) {
                    return setTimeout(e, 1e4);
                  }).then(function () {
                    return !1;
                  }),
                  t.canMakePayment().then(function (e) {
                    return !!e;
                  }),
                ])
                .then(function (t) {
                  return (
                    (o._canMakePaymentAvailability = Object(r.a)(
                      Object(r.a)({}, o._canMakePaymentAvailability),
                      {},
                      Object(c.a)({}, e, t)
                    )),
                    { backingLibraryName: e, available: t }
                  );
                });
            }),
            (o._isGooglePayOnAndroid = function () {
              var e = o._initialOptions.wallets,
                t = e && -1 === e.indexOf("googlePay");
              return Me && !t;
            }),
            (o._constructCanMakePaymentResponse = function () {
              var e =
                o._isGooglePayOnAndroid() &&
                !!o._canMakePaymentAvailability.BROWSER;
              return {
                applePay: !!o._canMakePaymentAvailability.APPLE_PAY,
                googlePay: !!o._canMakePaymentAvailability.GOOGLE_PAY || e,
              };
            }),
            (o.canMakePayment = de(function () {
              if (
                (o._report("pr.can_make_payment"), o._canMakePaymentResolved)
              ) {
                var e =
                  null !== o._activeBackingLibrary
                    ? o._constructCanMakePaymentResponse()
                    : null;
                return (
                  o._report("pr.can_make_payment_response", {
                    response: e,
                    cached: !0,
                  }),
                  ce.a.resolve(e)
                );
              }
              if ("https:" !== window.location.protocol)
                return (
                  o._controller.warn(
                    "If you are testing the PaymentRequest button (to accept Apple Pay, Google Pay, etc.) you must serve this page over HTTPS as it will not work over HTTP. Please read https://stripe.com/docs/stripe-js/elements/payment-request-button#html-js-prerequisites for more details."
                  ),
                  (o._canMakePaymentResolved = !0),
                  ce.a.resolve(null)
                );
              if (o._isCustomizedQueryStrategy && window.self !== window.top)
                return (
                  o._controller.warn(
                    "You must use Stripe PaymentRequest in the top level frame if you specify which wallets are available."
                  ),
                  (o._canMakePaymentResolved = !0),
                  ce.a.resolve(null)
                );
              var t = o._queryStrategy.map(function (e) {
                  return function () {
                    return o._canMakePaymentForBackingLibrary(e);
                  };
                }),
                n = new Bt.a();
              return jn(t, function (e) {
                var t = e.backingLibraryName,
                  n = e.available;
                return (
                  n &&
                    ((o._activeBackingLibraryName = t),
                    (o._activeBackingLibrary = o._backingLibraries[t]),
                    (o._buttonTypeName = o._activeBackingLibraryName),
                    o._isGooglePayOnAndroid() &&
                      (o._buttonTypeName = "GOOGLE_PAY")),
                  n
                );
              }).then(function (e) {
                var t = new Bt.a();
                o._canMakePaymentResolved = !0;
                var r = null;
                return (
                  "SATISFIED" === e.type &&
                    (r = o._constructCanMakePaymentResponse()),
                  o._report("pr.can_make_payment_response", {
                    response: r,
                    cached: !1,
                    duration: n.getElapsedTime(t),
                  }),
                  r
                );
              });
            })),
            (o.update = de(function (e) {
              if (o._isShowing)
                throw (
                  (o._report("pr.update_called_while_showing"),
                  new u.a(
                    "You cannot update Payment Request options while the payment sheet is showing."
                  ))
                );
              var t = Z(Dn, e, "PaymentRequest update()"),
                n = t.value,
                r = t.warnings;
              o._report("pr.update"),
                r.forEach(function (e) {
                  return o._warn(e);
                }),
                o._activeBackingLibrary && o._activeBackingLibrary.update(n);
            })),
            (o.show = de(function () {
              if (
                (o._usedByButtonElement &&
                  !o._showCalledByButtonElement &&
                  (o._report("pr.show_called_with_button"),
                  o._warn(
                    "Do not call show() yourself if you are using the paymentRequestButton Element. The Element handles showing the payment sheet."
                  )),
                !o._canMakePaymentResolved)
              )
                throw (
                  (o._report("pr.show_called_before_can_make_payment"),
                  new u.a(
                    "You must first check the Payment Request API's availability using paymentRequest.canMakePayment() before calling show()."
                  ))
                );
              if (!o._activeBackingLibrary)
                throw (
                  (o._report("pr.show_called_with_can_make_payment_false"),
                  new u.a("Payment Request is not available in this browser."))
                );
              var e = o._activeBackingLibrary;
              o._report("pr.show", {
                listeners: Object.keys(o._callbacks).sort(),
              }),
                (o._isShowing = !0),
                e.show();
            })),
            (o.abort = de(function () {
              if (o._activeBackingLibrary) {
                var e = o._activeBackingLibrary;
                o._report("pr.abort"), e.abort();
              }
            })),
            (o.isShowing = function () {
              return o._isShowing;
            }),
            (o._controller = e.controller),
            (o._authentication = e.authentication),
            (o._mids = e.mids),
            (o._listenerRegistry = e.listenerRegistry);
          var i = Z(xn, e.rawOptions || {}, "paymentRequest()"),
            p = i.value,
            d = i.warnings;
          if (
            (o._report("pr.options", {
              options: ct(p, [
                "country",
                "currency",
                "jcbEnabled",
                "requestPayerEmail",
                "requestPayerName",
                "requestPayerPhone",
                "requestShipping",
                "disableWallets",
                "wallets",
              ]),
            }),
            d.forEach(function (e) {
              return o._warn(e);
            }),
            p.__billingDetailsEmailOverride && p.requestPayerEmail)
          )
            throw new u.a(
              "When providing `__billingDetailsEmailOverride`, `requestPayerEmail` has to be `false` so that the customer is not prompted for their email in the payment sheet."
            );
          var f = p.disableWallets,
            m = f
              ? y.filter(function (e) {
                  return -1 === f.indexOf(e);
                })
              : p.wallets;
          return (
            (o._queryStrategy = m ? Un(m) : e.queryStrategyOverride || Fn()),
            (o._isCustomizedQueryStrategy = !!m),
            o._report("pr.query_strategy", { queryStrategy: o._queryStrategy }),
            (o._initialOptions = Object(r.a)(
              Object(r.a)({}, p),
              {},
              { __betas: e.betas, wallets: m }
            )),
            o._initBackingLibraries(o._initialOptions),
            o
          );
        }
        return n;
      })(ye),
      Ir = {
        base: S(G),
        complete: S(G),
        empty: S(G),
        invalid: S(G),
        paymentRequestButton: S(G),
      },
      Cr = {
        classes: S(
          $({
            base: S(D),
            complete: S(D),
            empty: S(D),
            focus: S(D),
            invalid: S(D),
            webkitAutofill: S(D),
          })
        ),
        hidePostalCode: S(q),
        hideIcon: S(q),
        showIcon: S(q),
        style: S($(Ir)),
        iconStyle: S(N("solid", "default")),
        value: S(T(D, G)),
        __privateCvcOptional: S(q),
        __privateValue: S(T(D, G)),
        __privateEmitIbanValue: S(q),
        error: S($({ type: D, code: S(D), decline_code: S(D), param: S(D) })),
        locale: K("elements()"),
        fonts: K("elements()"),
        placeholder: S(D),
        disabled: S(q),
        placeholderCountry: S(D),
        paymentRequest: S(
          ((gr = Ar),
          (Er = "stripe.paymentRequest(...)"),
          function (e, t) {
            return e instanceof gr
              ? w(e)
              : j("a ".concat(Er, " instance"), e, t);
          })
        ),
        supportedCountries: S(z(D)),
        accountHolderType: S(N("individual", "company")),
        issuingCard: S(D),
      },
      Nr = $(Cr),
      Rr =
        ((wr = {}),
        Object(c.a)(wr, $t.a.card, Xt.a.CARD_ELEMENT),
        Object(c.a)(wr, $t.a.cardNumber, Xt.a.CARD_ELEMENT),
        Object(c.a)(wr, $t.a.cardExpiry, Xt.a.CARD_ELEMENT),
        Object(c.a)(wr, $t.a.cardCvc, Xt.a.CARD_ELEMENT),
        Object(c.a)(wr, $t.a.postalCode, Xt.a.CARD_ELEMENT),
        Object(c.a)(
          wr,
          $t.a.paymentRequestButton,
          Xt.a.PAYMENT_REQUEST_ELEMENT
        ),
        Object(c.a)(wr, $t.a.iban, Xt.a.IBAN_ELEMENT),
        Object(c.a)(wr, $t.a.idealBank, Xt.a.IDEAL_BANK_ELEMENT),
        Object(c.a)(wr, $t.a.p24Bank, Xt.a.P24_BANK_ELEMENT),
        Object(c.a)(wr, $t.a.auBankAccount, Xt.a.AU_BANK_ACCOUNT_ELEMENT),
        Object(c.a)(wr, $t.a.fpxBank, Xt.a.FPX_BANK_ELEMENT),
        Object(c.a)(
          wr,
          $t.a.issuingCardNumberDisplay,
          Xt.a.ISSUING_CARD_NUMBER_DISPLAY_ELEMENT
        ),
        Object(c.a)(
          wr,
          $t.a.issuingCardCvcDisplay,
          Xt.a.ISSUING_CARD_CVC_DISPLAY_ELEMENT
        ),
        Object(c.a)(
          wr,
          $t.a.issuingCardExpiryDisplay,
          Xt.a.ISSUING_CARD_EXPIRY_DISPLAY_ELEMENT
        ),
        Object(c.a)(wr, $t.a.epsBank, Xt.a.EPS_BANK_ELEMENT),
        Object(c.a)(wr, $t.a.netbankingBank, Xt.a.NETBANKING_BANK_ELEMENT),
        Object(c.a)(
          wr,
          $t.a.afterpayClearpayMessageModal,
          Xt.a.AFTERPAY_MESSAGE_MODAL_ELEMENT
        ),
        wr),
      Mr = function (e, t) {
        return (function (e) {
          return (
            e === $t.a.cardNumber || e === $t.a.cardExpiry || e === $t.a.cardCvc
          );
        })(e) && t.cl
          ? Xt.a.CARD_LIGHT_ELEMENT
          : Rr[e];
      },
      Lr = {
        margin: "0",
        padding: "0",
        border: "none",
        display: "block",
        background: "transparent",
        position: "relative",
        opacity: "1",
      },
      xr = {
        border: "none",
        display: "block",
        position: "absolute",
        height: "1px",
        top: "-1px",
        left: "0",
        padding: "0",
        margin: "0",
        width: "100%",
        opacity: "0",
        background: "transparent",
        "pointer-events": "none",
        "font-size": "16px",
      },
      Dr = function (e) {
        var t = Object(kn.a)(e, null);
        return !!t && "rtl" === t.getPropertyValue("direction");
      },
      Br = function (e) {
        var t = document.createElement("input");
        return (
          (t.className = e),
          t.setAttribute("aria-hidden", "true"),
          t.setAttribute("aria-label", " "),
          t.setAttribute("autocomplete", "false"),
          (t.maxLength = 1),
          (t.disabled = !0),
          Object(se.d)(t, xr),
          t
        );
      },
      qr = function () {
        return Br(Zt);
      },
      Fr = function () {
        var e = Br(en);
        return e.setAttribute("tabindex", "-1"), e;
      },
      Ur = function () {
        document.activeElement &&
          document.activeElement.blur &&
          document.activeElement.blur();
      },
      Hr = ["test_id"],
      Yr = function (e) {
        switch (e.type) {
          case "object":
            return Hr.push(e.object.id), { issuingCard: e.object };
          case "error":
            return { error: e.error };
          default:
            return Object(l.a)(e);
        }
      },
      Gr = function (e) {
        switch (e.type) {
          case "object":
            return { nonce: e.object.public_nonce };
          case "error":
            return { error: e.error };
          default:
            return Object(l.a)(e);
        }
      },
      zr = {
        base: "StripeElement",
        focus: "StripeElement--focus",
        invalid: "StripeElement--invalid",
        complete: "StripeElement--complete",
        empty: "StripeElement--empty",
        webkitAutofill: "StripeElement--webkit-autofill",
      },
      Wr = "#faffbd",
      Kr = function (e) {
        return parseFloat(e.toFixed(1));
      },
      Vr = function (e) {
        return /^\d+(\.\d*)?px$/.test(e);
      },
      Jr = (function () {
        function e(t) {
          var n = this;
          Object(a.a)(this, e),
            (this.focus = function () {
              if (n._isIssuingElement())
                throw new u.a(
                  "Cannot call focus() on an ".concat(
                    n._componentName,
                    " Element."
                  )
                );
              document.activeElement &&
                document.activeElement.blur &&
                document.activeElement.blur(),
                n._fakeInput.focus();
            }),
            (this._formSubmit = function () {
              for (
                var e = n._component.parentElement;
                e && "FORM" !== e.nodeName;

              )
                e = e.parentElement;
              if (e) {
                var t = document.createEvent("Event");
                t.initEvent("submit", !0, !0), e.dispatchEvent(t);
              }
            });
          var r = t.options,
            o = t.component,
            i = t.listenerRegistry,
            c = t.elementTimings,
            s = t.emitEvent,
            l = t.getParent,
            p = r.controller,
            d = r.componentName,
            f = r.publicOptions;
          (this._componentName = d),
            (this._component = o),
            (this._controller = p),
            (this._listenerRegistry = i),
            (this._emitEvent = s),
            (this._getParent = l);
          var m = Z(Nr, f || {}, "create()"),
            _ = m.value;
          m.warnings.forEach(function (e) {
            return n._controller.warn(e);
          });
          var h,
            y = _.paymentRequest,
            b = _.classes,
            v = _.issuingCard,
            g = "paymentRequestButton" === this._componentName;
          if (g) {
            if (!y)
              throw new u.a(
                "You must pass in a stripe.paymentRequest object in order to use this Element."
              );
            (this._paymentRequest = y), this._paymentRequest._registerElement();
          }
          if (this._isIssuingElement()) {
            if (!v)
              throw new Error(
                "You must pass in an ID to the issuingCard option in order to use this Element."
              );
            if (((h = v), -1 === Hr.indexOf(h)))
              throw new Error(
                "Issuing card ".concat(v, " has not been retrieved.")
              );
          }
          this._createElement(r, _, c),
            (this._classes = zr),
            this._computeCustomClasses(b || {}),
            (this._lastBackgroundColor = ""),
            (this._focused = !1),
            (this._empty = !g),
            (this._invalid = !1),
            (this._complete = !1),
            (this._autofilled = !1),
            (this._lastSubmittedAt = null);
        }
        return (
          Object(o.a)(e, [
            {
              key: "update",
              value: function (e) {
                var t = this,
                  n = Z(Nr, e || {}, "element.update()"),
                  r = n.value;
                if (
                  (n.warnings.forEach(function (e) {
                    return t._controller.warn(e);
                  }),
                  r)
                ) {
                  var a = r.classes,
                    o = s(r, ["classes"]);
                  a &&
                    (this._removeClasses(),
                    this._computeCustomClasses(a),
                    this._updateClasses()),
                    this._updateFrameHeight(r),
                    Object.keys(o).length &&
                      (this._frame.update(o),
                      this._secondaryFrame && this._secondaryFrame.update(o));
                }
              },
            },
            {
              key: "blur",
              value: function () {
                if (this._isIssuingElement())
                  throw new u.a(
                    "Cannot call blur() on an ".concat(
                      this._componentName,
                      " Element."
                    )
                  );
                this._frame.blur(), this._fakeInput.blur();
              },
            },
            {
              key: "clear",
              value: function () {
                this._frame.clear();
              },
            },
            {
              key: "unmount",
              value: function () {
                var e = this._getParent(),
                  t = this._label;
                e &&
                  (this._listenerRegistry.removeEventListener(
                    e,
                    "click",
                    this.focus
                  ),
                  this._removeClasses()),
                  t &&
                    (this._listenerRegistry.removeEventListener(
                      t,
                      "click",
                      this.focus
                    ),
                    (this._label = null)),
                  this._secondaryFrame &&
                    (this._secondaryFrame.unmount(),
                    this._listenerRegistry.removeEventListener(
                      window,
                      "click",
                      this._handleOutsideClick
                    )),
                  (this._fakeInput.disabled = !0),
                  this._frame.unmount();
              },
            },
            {
              key: "mount",
              value: function () {
                if (Object(se.b)(document, this._component)) {
                  this._controller.report("user_error.shadow_dom_mount", {
                    element: this._componentName,
                  });
                  var e = function () {
                    throw new u.a(
                      "Elements cannot be mounted in a ShadowRoot. Please mount in the Light DOM."
                    );
                  };
                  "test" === this._controller.keyMode()
                    ? e()
                    : setTimeout(e, 0);
                }
                if (this._paymentRequest) {
                  if (!this._paymentRequest._canMakePaymentResolved)
                    throw new u.a(
                      "For the paymentRequestButton Element, you must first check availability using paymentRequest.canMakePayment() before mounting the Element."
                    );
                  if (!this._paymentRequest._activeBackingLibraryName)
                    throw new u.a(
                      "The paymentRequestButton Element is not available in the current environment."
                    );
                }
                (this._mountTimestamp = new Bt.a()),
                  this._findPossibleLabel(),
                  this._updateClasses();
              },
            },
            {
              key: "_isIssuingElement",
              value: function () {
                return (
                  "issuingCardNumberDisplay" === this._componentName ||
                  "issuingCardCvcDisplay" === this._componentName ||
                  "issuingCardExpiryDisplay" === this._componentName
                );
              },
            },
            {
              key: "_updateClasses",
              value: function () {
                var e = this._getParent();
                e &&
                  Object(se.f)(e, [
                    [this._classes.base, !0],
                    [this._classes.empty, this._empty],
                    [this._classes.focus, this._focused],
                    [this._classes.invalid, this._invalid],
                    [this._classes.complete, this._complete],
                    [this._classes.webkitAutofill, this._autofilled],
                  ]);
              },
            },
            {
              key: "_removeClasses",
              value: function () {
                var e = this._getParent();
                e &&
                  Object(se.f)(e, [
                    [this._classes.base, !1],
                    [this._classes.empty, !1],
                    [this._classes.focus, !1],
                    [this._classes.invalid, !1],
                    [this._classes.complete, !1],
                    [this._classes.webkitAutofill, !1],
                  ]);
              },
            },
            {
              key: "_findPossibleLabel",
              value: function () {
                var e = this._getParent();
                if (e) {
                  var t,
                    n = e.getAttribute("id");
                  if (
                    (n &&
                      (t = document.querySelector(
                        "label[for='".concat(n, "']")
                      )),
                    t)
                  )
                    this._listenerRegistry.addEventListener(
                      e,
                      "click",
                      this.focus
                    );
                  else
                    for (
                      t = t || e.parentElement;
                      t && "LABEL" !== t.nodeName;

                    )
                      t = t.parentElement;
                  t
                    ? ((this._label = t),
                      this._listenerRegistry.addEventListener(
                        t,
                        "click",
                        this.focus
                      ))
                    : this._listenerRegistry.addEventListener(
                        e,
                        "click",
                        this.focus
                      );
                }
              },
            },
            {
              key: "_computeCustomClasses",
              value: function (e) {
                var t = {};
                return (
                  Object.keys(e).forEach(function (n) {
                    if (!zr[n])
                      throw new u.a(
                        ""
                          .concat(
                            n,
                            " is not a customizable class name.\nYou can customize: "
                          )
                          .concat(Object.keys(zr).join(", "))
                      );
                    var r = e[n] || zr[n];
                    t[n] = r.replace(/\./g, " ");
                  }),
                  (this._classes = Object(r.a)(
                    Object(r.a)({}, this._classes),
                    t
                  )),
                  this
                );
              },
            },
            {
              key: "_setupEvents",
              value: function (e) {
                var t = this,
                  n = e.stripeJsLoadTimestamp,
                  r = (e.stripeCreateTimestamp, e.groupCreateTimestamp),
                  a = e.createTimestamp,
                  o = 0,
                  c = 0,
                  s = {
                    stripeJsLoad: n.getAsPosixTime(),
                    stripeCreate: a.getAsPosixTime(),
                    groupCreate: r.getAsPosixTime(),
                    create: a.getAsPosixTime(),
                  };
                if (
                  (this._frame._on("load", function (e) {
                    var n = e.source;
                    o++;
                    var r = t._getParent(),
                      a = Dr(r),
                      i = t._paymentRequest
                        ? t._paymentRequest._buttonTypeName
                        : null;
                    t._mountTimestamp &&
                      (s.mount = t._mountTimestamp.getAsPosixTime()),
                      t._frame.send({
                        action: "stripe-user-mount",
                        payload: {
                          timestamps: s,
                          loadCount: o,
                          matchFrame: n === t._frame._iframe.contentWindow,
                          rtl: a,
                          paymentRequestButtonType: i,
                        },
                      });
                  }),
                  this._secondaryFrame)
                ) {
                  var u = this._secondaryFrame;
                  u._on("load", function (e) {
                    var n = e.source;
                    c++,
                      t._mountTimestamp &&
                        (s.mount = t._mountTimestamp.getAsPosixTime()),
                      u.send({
                        action: "stripe-user-mount",
                        payload: {
                          timestamps: s,
                          loadCount: c,
                          matchFrame: n === u._iframe.contentWindow,
                          rtl: !1,
                          paymentRequestButtonType: null,
                        },
                      });
                  });
                }
                this._frame._on("redirectfocus", function (e) {
                  var n = e.focusDirection,
                    r = Object(Ye.b)(t._component, n);
                  r && r.focus();
                }),
                  this._frame._on("focus", function () {
                    (t._focused = !0), t._updateClasses();
                  }),
                  this._frame._on("blur", function () {
                    (t._focused = !1),
                      t._updateClasses(),
                      t._lastSubmittedAt &&
                        "paymentRequestButton" === t._componentName &&
                        (t._controller.report(
                          "payment_request_button.sheet_visible",
                          { latency: t._lastSubmittedAt.getElapsedTime() }
                        ),
                        (t._lastSubmittedAt = null));
                  }),
                  this._frame._on("submit", function () {
                    if ("paymentRequestButton" === t._componentName) {
                      t._lastSubmittedAt = new Bt.a();
                      var e = !1,
                        n = !1;
                      Dt(),
                        t._emitEvent("click", {
                          preventDefault: function () {
                            t._controller.report(
                              "payment_request_button.default_prevented"
                            ),
                              e &&
                                t._controller.warn(
                                  "event.preventDefault() was called after the payment sheet was shown. Make sure to call it synchronously when handling the `click` event."
                                ),
                              (n = !0);
                          },
                        }),
                        !n &&
                          t._paymentRequest &&
                          (t._paymentRequest._elementShow(), (e = !0));
                    } else t._emitEvent("submit"), t._formSubmit();
                  }),
                  ["ready", "focus", "blur", "escape"].forEach(function (e) {
                    t._frame._on(e, function () {
                      t._emitEvent(e);
                    });
                  }),
                  this._frame._on("change", function (e) {
                    Dt();
                    var n = {},
                      r = Vt[t._componentName] || [];
                    ["error", "value", "empty", "complete"]
                      .concat(Object(i.a)(r))
                      .forEach(function (t) {
                        return (n[t] = e[t]);
                      }),
                      t._emitEvent("change", n),
                      (t._empty = n.empty),
                      (t._invalid = !!n.error),
                      (t._complete = n.complete),
                      t._updateClasses();
                  }),
                  this._frame._on("__privateIntegrationError", function (e) {
                    var n = e.message;
                    t._emitEvent("__privateIntegrationError", { message: n });
                  }),
                  this._frame._on("dimensions", function (e) {
                    var n = t._getParent();
                    if (n) {
                      var r = Object(kn.a)(n, null);
                      if (r) {
                        var a = parseFloat(r.getPropertyValue("height")),
                          o = e.height;
                        if ("border-box" === r.getPropertyValue("box-sizing")) {
                          var i = parseFloat(r.getPropertyValue("padding-top")),
                            c = parseFloat(
                              r.getPropertyValue("padding-bottom")
                            );
                          a =
                            a -
                            parseFloat(r.getPropertyValue("border-top")) -
                            parseFloat(r.getPropertyValue("border-bottom")) -
                            i -
                            c;
                        }
                        var s = Kr(a),
                          u = Kr(o);
                        0 !== a &&
                          s < u &&
                          t._controller.report("wrapper_height_mismatch", {
                            height: u,
                            outer_height: s,
                          });
                        var l = t._component.getBoundingClientRect().height,
                          p = Kr(l);
                        0 !== l &&
                          0 !== o &&
                          p !== u &&
                          (t._frame.updateStyle({ height: "".concat(o, "px") }),
                          t._controller.report("iframe_height_update", {
                            height: u,
                            calculated_height: p,
                          }));
                      }
                    }
                  }),
                  this._frame._on("autofill", function () {
                    var e = t._getParent();
                    if (e) {
                      var n = e.style.backgroundColor,
                        r = n === Wr || "rgb(250, 255, 189)" === n;
                      (t._lastBackgroundColor = r ? t._lastBackgroundColor : n),
                        (e.style.backgroundColor = Wr),
                        (t._autofilled = !0),
                        t._updateClasses();
                    }
                  }),
                  this._frame._on("autofill-cleared", function () {
                    var e = t._getParent();
                    (t._autofilled = !1),
                      e && (e.style.backgroundColor = t._lastBackgroundColor),
                      t._updateClasses();
                  }),
                  this._frame._on("update-outer-style", function (e) {
                    Object.keys(e).forEach(function (n) {
                      t._component.style.setProperty(n, e[n]);
                    });
                  });
              },
            },
            {
              key: "_handleOutsideClick",
              value: function () {
                this._secondaryFrame &&
                  this._secondaryFrame.send({
                    action: "stripe-outside-click",
                    payload: {},
                  });
              },
            },
            {
              key: "_updateFrameHeight",
              value: function (e) {
                var t =
                    arguments.length > 1 &&
                    void 0 !== arguments[1] &&
                    arguments[1],
                  n = e.style;
                if ("paymentRequestButton" === this._componentName) {
                  var r = (n && n.paymentRequestButton) || {},
                    a = r.height,
                    o = "string" == typeof a ? a : void 0;
                  (t || o) &&
                    (this._frame.updateStyle({
                      height: o || this._lastHeight || Pn,
                    }),
                    (this._lastHeight = o || this._lastHeight));
                } else {
                  var i = (n && n.base) || {},
                    c = i.lineHeight,
                    s = i.fontSize,
                    u = i.padding,
                    l =
                      "string" != typeof c || isNaN(parseFloat(c)) ? void 0 : c,
                    p = "string" == typeof s ? s : void 0,
                    d = "string" == typeof u ? u : void 0;
                  if (
                    (p &&
                      !Vr(p) &&
                      this._controller.warn(
                        "The fontSize style you specified (".concat(
                          p,
                          ") is not in px. We do not recommend using relative css units, as they will be calculated relative to our iframe's styles rather than your site's."
                        )
                      ),
                    t || l || p)
                  ) {
                    var f =
                        -1 === Q.j.indexOf(this._componentName)
                          ? void 0
                          : d || this._lastPadding,
                      m = On(l || this._lastHeight, p || this._lastFontSize, f);
                    this._frame.updateStyle({ height: m }),
                      (this._lastFontSize = p || this._lastFontSize),
                      (this._lastHeight = l || this._lastHeight),
                      (this._lastPadding = f);
                  }
                }
              },
            },
            {
              key: "_createElement",
              value: function (e, t, n) {
                var a = this,
                  o = (e.controller, e.publicOptions, e.componentName),
                  i = e.groupId,
                  c = s(e, [
                    "controller",
                    "publicOptions",
                    "componentName",
                    "groupId",
                  ]),
                  u =
                    (t.classes,
                    t.paymentRequest,
                    s(t, ["classes", "paymentRequest"])),
                  l = this._component,
                  p = qr();
                Object(se.d)(l, Lr);
                var d = Dr(document.body),
                  f = Mr(o, this._controller.getFlags()),
                  m = Object(r.a)(
                    Object(r.a)(Object(r.a)({}, c), u),
                    {},
                    { rtl: d }
                  ),
                  _ = this._controller.createElementFrame(f, o, i, m);
                if (
                  (_._on("load", function () {
                    p.disabled = !1;
                  }),
                  this._listenerRegistry.addEventListener(
                    p,
                    "focus",
                    function () {
                      _.focus();
                    }
                  ),
                  _.appendTo(l),
                  Jt[o])
                ) {
                  var h = Jt[o].secondary,
                    y = this._controller.createSecondaryElementFrame(
                      f,
                      h,
                      o,
                      i,
                      m
                    );
                  y &&
                    y.on &&
                    y.on("height-change", function (e) {
                      y.updateStyle({ height: "".concat(e.height, "px") });
                    }),
                    (this._secondaryFrame = y),
                    y.appendTo(l),
                    this._listenerRegistry.addEventListener(
                      window,
                      "click",
                      function () {
                        return a._handleOutsideClick();
                      }
                    );
                }
                if ((l.appendChild(p), Re && o !== Q.b.paymentRequestButton)) {
                  var b = Fr();
                  l.appendChild(b);
                }
                (this._frame = _),
                  (this._fakeInput = p),
                  this._setupEvents(n),
                  this._updateFrameHeight(t, !0);
              },
            },
          ]),
          e
        );
      })(),
      $r = {
        amount: F,
        currency: N("USD", "AUD", "CAD", "GBP", "NZD", "EUR"),
        badgeTheme: S(
          N(
            "black-on-mint",
            "black-on-white",
            "mint-on-black",
            "white-on-black"
          )
        ),
        introText: S(
          N("In", "in", "Or", "or", "Pay", "pay", "Pay in", "pay in")
        ),
        isEligible: S(q),
        isCartEligible: S(q),
        lockupTheme: S(N("black", "white", "mint")),
        logoType: S(N("badge", "lockup")),
        max: S(F),
        min: S(F),
        modalLinkStyle: S(
          N("circled-info-icon", "more-info-text", "learn-more-text")
        ),
        modalTheme: S(N("mint", "white")),
        showInterestFree: S(q),
        showLowerLimit: S(q),
        showUpperLimit: S(q),
        showWith: S(q),
      },
      Xr = $($r),
      Zr = function (e) {
        var t = !1;
        window.Promise || ((t = !0), (window.Promise = ce.a));
        var n = e();
        return t && window.Promise === ce.a && delete window.Promise, n;
      },
      Qr = function () {
        return Zr(function () {
          return n.e(2).then(n.bind(null, 53));
        });
      },
      ea = function (e) {
        var t,
          r = e.emitEvent,
          a = e.options,
          o = a.controller,
          c = a.locale,
          s = a.publicOptions,
          l = new Bt.a(),
          p = function (e) {
            var t = Z(Xr, e || {}, "create()"),
              n = t.value;
            return (
              t.warnings.forEach(function (e) {
                return o.warn(e);
              }),
              n
            );
          },
          d = p(s),
          f = function (e, n) {
            return e.apply(void 0, [t].concat(Object(i.a)(n)));
          },
          m = [],
          _ = function (e) {
            return function () {
              for (
                var n = arguments.length, r = new Array(n), a = 0;
                a < n;
                a++
              )
                r[a] = arguments[a];
              t ? f(e, r) : m.push([e, r]);
            };
          },
          h = function () {};
        ce.a
          .all([
            Zr(function () {
              return n.e(1).then(n.bind(null, 52));
            }),
            Qr(),
          ])
          .then(
            function (n) {
              var a = Object(jt.a)(n, 2),
                i = a[0],
                s = a[1],
                u = i.default;
              h = s.unmountModal;
              var p = e.component,
                _ = e.listenerRegistry;
              (t = u({
                component: p,
                mountModal: function (e, t) {
                  return s.mountModal({
                    controller: o,
                    listenerRegistry: _,
                    locale: e,
                    modalTheme: t,
                  });
                },
                locale: c,
                listenerRegistry: _,
              })),
                o.report("afterpay_message.loaded", {
                  load_time: l.getElapsedTime(),
                  locale: c,
                  currency: d.currency,
                }),
                (function () {
                  for (; m.length; ) {
                    var e = m.shift(),
                      t = Object(jt.a)(e, 2),
                      n = t[0],
                      r = t[1];
                    f(n, r);
                  }
                })(),
                r("ready");
            },
            function (e) {
              o.report("afterpay_message.import_error", { error: e });
            }
          );
        var y = function (e) {
          return function () {
            throw new u.a(e);
          };
        };
        return {
          mount: _(function (e) {
            e.mount(d);
          }),
          unmount: _(function (e) {
            h(), e.unmount();
          }),
          update: _(function (e, t) {
            var n = pt(d, t);
            (d = p(n)), e.update(d);
          }),
          focus: y("Focus is not supported by afterpayClearpayMessage."),
          blur: y("Blur is not supported by afterpayClearpayMessage."),
          clear: y("Clear is not supported by afterpayClearpayMessage."),
        };
      },
      ta = n(22);
    function na(e) {
      var t = (function (e, t) {
        if ("object" !== Object(ta.a)(e) || null === e) return e;
        var n = e[Symbol.toPrimitive];
        if (void 0 !== n) {
          var r = n.call(e, t || "default");
          if ("object" !== Object(ta.a)(r)) return r;
          throw new TypeError("@@toPrimitive must return a primitive value.");
        }
        return ("string" === t ? String : Number)(e);
      })(e, "string");
      return "symbol" === Object(ta.a)(t) ? t : String(t);
    }
    var ra,
      aa = { _componentName: D, _implementation: $({ _frame: $({ id: D }) }) },
      oa = $(aa),
      ia = function (e) {
        var t = X(oa, e, "");
        return "error" === t.type ? null : t.value;
      },
      ca = {
        alipay: "alipay",
        afterpay_clearpay: "afterpay_clearpay",
        au_becs_debit: "au_becs_debit",
        acss_debit: "acss_debit",
        bacs_debit: "bacs_debit",
        bancontact: "bancontact",
        boleto: "boleto",
        card: "card",
        eps: "eps",
        fpx: "fpx",
        giropay: "giropay",
        grabpay: "grabpay",
        ideal: "ideal",
        klarna: "klarna",
        konbini: "konbini",
        oxxo: "oxxo",
        p24: "p24",
        paypal: "paypal",
        sepa_debit: "sepa_debit",
        sofort: "sofort",
        three_d_secure: "three_d_secure",
        upi: "upi",
        us_bank_account: "us_bank_account",
        wechat_pay: "wechat_pay",
        netbanking: "netbanking",
        id_bank_transfer: "id_bank_transfer",
      },
      sa =
        ((ra = {}),
        Object(c.a)(ra, Q.b.auBankAccount, ca.au_becs_debit),
        Object(c.a)(ra, Q.b.card, ca.card),
        Object(c.a)(ra, Q.b.cardNumber, ca.card),
        Object(c.a)(ra, Q.b.cardExpiry, ca.card),
        Object(c.a)(ra, Q.b.cardCvc, ca.card),
        Object(c.a)(ra, Q.b.postalCode, ca.card),
        Object(c.a)(ra, Q.b.iban, ca.sepa_debit),
        Object(c.a)(ra, Q.b.idealBank, ca.ideal),
        Object(c.a)(ra, Q.b.fpxBank, ca.fpx),
        Object(c.a)(ra, Q.b.p24Bank, ca.p24),
        Object(c.a)(ra, Q.b.netbankingBank, ca.netbanking),
        Object(c.a)(ra, Q.b.epsBank, ca.eps),
        ra),
      ua = function (e) {
        return -1 === Q.k.indexOf(e);
      },
      la = function (e, t) {
        switch (e.type) {
          case "object":
            return { paymentIntent: e.object };
          case "error":
            var n = t ? { payment_intent: t } : {};
            return { error: Object(r.a)(Object(r.a)({}, n), e.error) };
          default:
            return Object(l.a)(e);
        }
      },
      pa = function (e, t) {
        switch (e.type) {
          case "error":
            return {
              error: Object(r.a)(
                Object(r.a)({}, t ? { setup_intent: t } : {}),
                e.error
              ),
            };
          case "object":
            return { setupIntent: e.object };
          default:
            return Object(l.a)(e);
        }
      },
      da = function (e) {
        return "payment_intent" === e.object
          ? { id: e.id, clientSecret: e.client_secret, type: "PAYMENT_INTENT" }
          : { id: e.id, clientSecret: e.client_secret, type: "SETUP_INTENT" };
      },
      fa = function (e) {
        return "requires_source_action" === e || "requires_action" === e;
      },
      ma = function (e) {
        return "requires_source_action" === e.status ||
          "requires_action" === e.status
          ? e.next_action
          : null;
      },
      _a = function (e) {
        var t = atob(e.replace(/-/g, "+").replace(/_/g, "/"));
        return Uint8Array.from(t, function (e) {
          return e.charCodeAt(0);
        });
      },
      ha = function (e) {
        return e.replace(/\+/g, "-").replace(/\//g, "_").replace(/=+$/, "");
      },
      ya = function (e, t) {
        if ("string" != typeof e) return j("a client_secret string", e, t);
        var n,
          r = (n = e.trim().match(/^((seti|pi)_[^_]+)_secret_[^-]+$/))
            ? "pi" === n[2]
              ? { id: n[1], clientSecret: n[0], type: "PAYMENT_INTENT" }
              : { id: n[1], clientSecret: n[0], type: "SETUP_INTENT" }
            : null;
        return null === r
          ? j("a client secret of the form ${id}_secret_${secret}", e, t)
          : w(r, []);
      },
      ba = function (e, t) {
        var n = ya(e, t);
        return "error" === n.type
          ? n
          : n.value.type === Q.g.SETUP_INTENT
          ? O(
              new u.a(
                E(
                  "a PaymentIntent client secret",
                  "a SetupIntent client secret",
                  t
                )
              )
            )
          : w(n.value, []);
      },
      va = function (e, t) {
        var n = ya(e, t);
        return "error" === n.type
          ? n
          : n.value.type === Q.g.PAYMENT_INTENT
          ? O(
              new u.a(
                E(
                  "a SetupIntent client secret",
                  "a PaymentIntent client secret",
                  t
                )
              )
            )
          : w(n.value, []);
      },
      ga = function (e, t) {
        if (null === e) return k("object", "null", t);
        if ("object" != typeof e) return k("object", typeof e, t);
        var n = e.client_secret,
          r = e.status,
          a = e.next_action,
          o = ya(n, P(t, "client_secret"));
        return "error" === o.type
          ? o
          : "string" != typeof r
          ? k("string", typeof r, P(t, "status"))
          : ("requires_source_action" !== r && "requires_action" !== r) ||
            "object" == typeof a
          ? (e.object, w(e, []))
          : k("object", typeof a, P(t, "next_action"));
      },
      Ea = function (e) {
        return function (t, n) {
          if ("object" != typeof t) return k("object", typeof t, n);
          if (null === t) return k("object", "null", n);
          var r,
            a = t.type,
            o = s(t, ["type"]);
          if (null === e) {
            if ("string" != typeof a)
              return k("string", typeof a, P(n, "type"));
            r = a;
          } else {
            if (void 0 !== a && a !== e)
              return "string" != typeof a
                ? k("string", typeof a, P(n, "type"))
                : k('"'.concat(a, '"'), '"'.concat(e, '"'), P(n, "type"));
            r = e;
          }
          var c = o[r],
            l = (o[r], s(o, [r].map(na)));
          if (
            (-1 !==
              [
                "acss_debit",
                "afterpay_clearpay",
                "alipay",
                "bancontact",
                "eps",
                "giropay",
                "grabpay",
                "klarna",
                "konbini",
                "oxxo",
                "p24",
                "paypal",
                "us_bank_account",
                "wechat_pay",
              ].indexOf(r) &&
              void 0 === c &&
              (c = {}),
            "object" != typeof c)
          )
            return k("object or element", typeof t[r], P(n, r));
          if (null === c) return k("object or element", "null", P(n, r));
          var p = ia(c);
          if (p) {
            var d = p._componentName;
            if (sa[d] !== r) {
              var f = [].concat(Object(i.a)(n.path), [r]).join("."),
                m = n.label,
                _ = new u.a(
                  "Invalid value for "
                    .concat(m, ": ")
                    .concat(f, " was `")
                    .concat(d, "` Element, which cannot be used to create ")
                    .concat(r, " PaymentMethods.")
                );
              return O(_);
            }
            return w({ type: r, element: p, data: l });
          }
          return w({ type: r, element: null, data: o });
        };
      },
      wa = B(
        $({
          handleActions: B(q, function () {
            return !0;
          }),
        }),
        function () {
          return { handleActions: !0 };
        }
      ),
      Oa = function (e, t) {
        return function (n, a) {
          if (void 0 === n)
            return w({
              paymentMethodData: null,
              paymentMethodOptions: null,
              source: null,
              paymentMethod: null,
              otherParams: {},
            });
          if ("object" != typeof n) return k("object", typeof n, a);
          if (null === n) return k("object", "null", a);
          var o = n.source,
            c = n.source_data,
            l = n.payment_method_data,
            p = n.payment_method_options,
            d = n.payment_method,
            f = s(n, [
              "source",
              "source_data",
              "payment_method_data",
              "payment_method_options",
              "payment_method",
            ]);
          if (null != c)
            throw new u.a(
              "".concat(
                t,
                ": Expected payment_method, or source, not source_data."
              )
            );
          if (null != l)
            throw new u.a(
              "".concat(
                t,
                ": Expected payment_method, or source, not payment_method_data."
              )
            );
          if (null != o && null != d)
            throw new u.a(
              "".concat(
                t,
                ": Expected either payment_method or source, but not both."
              )
            );
          if (null === e && null != d && "string" != typeof d)
            throw new u.a(
              "".concat(
                t,
                ": Expected payment_method[type] to be set if payment_method is passed."
              )
            );
          if (null != o) {
            if ("string" != typeof o)
              return k("string", typeof o, P(a, "source"));
            if ("updatePaymentIntent" === t)
              throw new u.a(
                "".concat(
                  t,
                  ": Expected payment_method, not source to be passed."
                )
              );
            return w({
              source: o,
              paymentMethodData: null,
              paymentMethodOptions: null,
              paymentMethod: null,
              otherParams: f,
            });
          }
          if (null != d && "string" != typeof d && "object" != typeof d)
            return k("string or object", typeof d, P(a, "payment_method"));
          var m,
            _ = X(
              ((m = e),
              function (e, t) {
                if (null == e) return w(null);
                if ("object" != typeof e) return k("object", typeof e, t);
                var n = e.card,
                  a = s(e, ["card"]);
                if (!n || "object" != typeof n) return w(e);
                var o = n.cvc,
                  i = s(n, ["cvc"]);
                if (null == o) return w(e);
                var c = ia(o),
                  u = c ? c._componentName : "";
                return Q.b.cardCvc !== u
                  ? k(
                      "`".concat(Q.b.cardCvc, "` Element"),
                      u ? "`".concat(u, "` Element") : typeof o,
                      P(t, "".concat(m || "card", ".cvc"))
                    )
                  : w(
                      Object(r.a)(
                        Object(r.a)({}, a),
                        {},
                        {
                          card: Object(r.a)(Object(r.a)({}, i), {}, { cvc: c }),
                        }
                      )
                    );
              }),
              p,
              t,
              {
                path: [].concat(Object(i.a)(a.path), [
                  "payment_method_options",
                ]),
              }
            );
          if ("error" === _.type) return _;
          if ("string" == typeof d)
            return w({
              source: null,
              paymentMethodData: null,
              paymentMethodOptions: _.value,
              paymentMethod: d,
              otherParams: f,
            });
          if ("object" == typeof d && null !== d) {
            var h = X(Ea(e), d, t, {
              path: [].concat(Object(i.a)(a.path), ["payment_method"]),
            });
            if ("error" === h.type) return h;
            var y = h.value;
            return w({
              source: null,
              paymentMethod: null,
              paymentMethodOptions: _.value,
              paymentMethodData: y,
              otherParams: f,
            });
          }
          return w({
            source: null,
            paymentMethodData: null,
            paymentMethodOptions: null,
            paymentMethod: null,
            otherParams: f,
          });
        };
      },
      ka = {
        locale: K("elements()"),
        fonts: K("elements()"),
        appearance: S(G),
      },
      ja = $(ka),
      Pa = {
        locale: K("elements()"),
        fonts: K("elements()"),
        clientSecret: ya,
        business: S($({ name: D })),
        appearance: S(G),
        paymentMethodOrder: S(z(D)),
      },
      Sa = Object(r.a)(Object(r.a)({}, Pa), {}, { clientSecret: S(ya) }),
      Ta = $(Pa),
      Aa = $(Sa),
      Ia = {
        locale: K("elements()"),
        fonts: K("elements()"),
        appearance: S(G),
      },
      Ca = $(Ia),
      Na = function (e, t, n, a) {
        switch (e) {
          case "authentication":
            var o = Z(ja, t, n),
              i = o.value;
            i.locale, i.fonts;
            return { value: s(i, ["locale", "fonts"]), warnings: o.warnings };
          case "payment":
            var c = Z(a ? Aa : Ta, t, n),
              u = c.value,
              p = (u.locale, u.fonts, u.clientSecret),
              d = s(u, ["locale", "fonts", "clientSecret"]),
              f = c.warnings;
            return {
              value: Object(r.a)({ parsedIntentSecret: p }, d),
              warnings: f,
            };
          case "shippingAddress":
            var m = Z(Ca, t, n),
              _ = m.value;
            _.locale, _.fonts;
            return { value: s(_, ["locale", "fonts"]), warnings: m.warnings };
          default:
            return Object(l.a)(e);
        }
      };
    var Ra = Object.keys({
        card: 10,
        afterpay_clearpay: 20,
        alipay: 30,
        eps: 40,
        giropay: 50,
        ideal: 60,
        bancontact: 70,
        p24: 80,
        sofort: 90,
      }),
      Ma = function (e) {
        e.parsedIntentSecret;
        return s(e, ["parsedIntentSecret"]);
      },
      La = function (e) {
        var t = e.controller,
          n = e.componentName,
          r = e.groupId,
          a = e.locale,
          o = e.fonts,
          i = e.wait,
          c = e.publicOptions,
          s = {
            locale: a,
            fonts: o,
            wait: i,
            rtl: Dr(document.body),
            publicOptions: Ma(c),
          },
          u = rn[n],
          l = t.createElementFrame(u, n, r, s),
          p = qr(),
          d = Br(Qt),
          f = null;
        return (
          Re && (f = Fr()),
          {
            frame: l,
            hiddenInputBefore: p,
            hiddenInputAfter: d,
            hiddenSafariQuirkFixInput: f,
          }
        );
      },
      xa = function (e) {
        var t = e.component,
          n = e.listenerRegistry,
          a = e.elementTimings,
          o = e.getParent,
          i = e.emitEvent,
          c = e.options,
          s = e.selfDestruct,
          u = null,
          p = [],
          d = La(c),
          f = d.frame,
          m = d.hiddenSafariQuirkFixInput,
          _ = d.hiddenInputBefore,
          h = d.hiddenInputAfter;
        if ("payment" === c.componentName) {
          var y = c.publicOptions.parsedIntentSecret;
          c.controller.action
            .retrievePaymentMethodPreferences({
              intentSecret: y,
              locale: e.options.locale,
            })
            .then(function (e) {
              if ("error" === e.type)
                return i("loaderror", { error: e.error }), void s();
              var t,
                a =
                  "payment_intent" === e.object.type
                    ? e.object.payment_intent
                    : e.object.setup_intent,
                o = (function (e, t) {
                  if (
                    e.payment_method_types.every(function (e) {
                      return -1 === Ra.indexOf(e);
                    })
                  ) {
                    var n = Ra.join(", ");
                    return {
                      type: "validation_error",
                      code: "unsupported_parameter",
                      param: "payment_method_types",
                      message:
                        "The PaymentIntent you passed doesn't have any payment_method_types that are supported by the Payment Element. Please use a PaymentIntent with a least one of the following payment_method_types: ".concat(
                          n
                        ),
                    };
                  }
                  return "off_session" !== e.setup_future_usage ||
                    (t.business && t.business.name)
                    ? null
                    : {
                        type: "validation_error",
                        code: "parameter_missing",
                        param: "business[name]",
                        message:
                          "The PaymentIntent you passed has setup_future_usage set, but a business name was not passed to the Payment Element at creation. Please pass the business[name] option when calling elements.create('payment', options).",
                      };
                })(a, c.publicOptions);
              if (o) return i("loaderror", { error: o }), void s();
              -1 !== a.payment_method_types.indexOf(ca.afterpay_clearpay) &&
                ((t = Qr().then(function (e) {
                  var t = e.mountModal,
                    n = e.unmountModal;
                  return (
                    p.push(function () {
                      n();
                    }),
                    t
                  );
                })),
                f._on("mount-afterpay-modal", function (e) {
                  var r = e.locale,
                    a = e.modalTheme;
                  t.then(function (e) {
                    e({
                      controller: c.controller,
                      listenerRegistry: n,
                      locale: r,
                      modalTheme: a,
                    });
                  });
                }));
              var u = Object(r.a)(
                {
                  orderedPaymentMethodTypes:
                    e.object.ordered_payment_method_types,
                },
                "payment_intent" === e.object.type
                  ? {
                      type: "PAYMENT_INTENT",
                      paymentIntent: e.object.payment_intent,
                    }
                  : { type: "SETUP_INTENT", setupIntent: e.object.setup_intent }
              );
              f.send({ action: "stripe-intent-retrieved", payload: u });
            });
        }
        Object(se.d)(t, Lr),
          t.appendChild(_),
          f.appendTo(t),
          t.appendChild(h),
          m && t.appendChild(m),
          f.updateStyle(
            (function (e) {
              switch (e) {
                case "authentication":
                  return { height: "46px" };
                case "payment":
                  return { height: "0" };
                case "shippingAddress":
                  return { height: "80px" };
                default:
                  return Object(l.a)(e);
              }
            })(c.componentName)
          );
        var b = "first";
        n.addEventListener(_, "focus", function () {
          f.action.setFocusTarget(b).then(function () {
            f.focus();
          }),
            (b = "first");
        }),
          n.addEventListener(h, "focus", function () {
            (b = "last"), _.focus();
          }),
          f._on("load", function () {
            (_.disabled = !1),
              (h.disabled = !1),
              p.push(function () {
                (_.disabled = !0), (h.disabled = !0);
              }),
              f.send({
                action: "stripe-user-mount",
                payload: {
                  timestamps: {
                    stripeJsLoad: a.stripeJsLoadTimestamp.getAsPosixTime(),
                    stripeCreate: a.stripeCreateTimestamp.getAsPosixTime(),
                    groupCreate: a.groupCreateTimestamp.getAsPosixTime(),
                    create: a.createTimestamp.getAsPosixTime(),
                    mount: u ? u.getAsPosixTime() : 0,
                  },
                  rtl: Dr(o()),
                },
              });
          }),
          nn.forEach(function (e) {
            f._on(e, function (t) {
              return i(e, t);
            });
          });
        var v = {};
        f._on("add_overlay", function (e) {
          var n = e.style,
            a = e.nonce,
            o = e.elementType,
            i = c.controller.createElementFrame(an[o], o, c.groupId, {
              locale: c.locale,
              rtl: Dr(document.body),
            });
          (v[a] = i),
            i.updateStyle(
              Object(r.a)({ "min-width": "0", "z-index": "1000" }, n)
            ),
            i.appendTo(t),
            i._on("ready", function () {
              i.focus();
            }),
            p.push(function () {
              v[a] && (i.destroy(), delete v[a]);
            });
        }),
          f._on("remove_overlay", function (e) {
            var t = e.nonce;
            v[t] && (v[t].destroy(), delete v[t]);
          }),
          f._on("set_styles", function (e) {
            f.updateStyle(e);
          }),
          f._on("redirectfocus", function (e) {
            var n = e.focusDirection;
            h.disabled = !0;
            var r = Object(Ye.b)(t, n);
            (h.disabled = !1), r && r.focus();
          });
        return {
          update: function (e) {
            f.update(e);
          },
          focus: function () {
            (b = "first_input"), Ur(), _.focus();
          },
          blur: function () {
            f.blur(), _.blur();
          },
          clear: function () {
            f.clear();
          },
          mount: function () {
            u = new Bt.a();
            var e = o();
            if (e) {
              Object(se.f)(e, [[tn, !0]]),
                p.push(function () {
                  Object(se.f)(e, [[tn, !1]]);
                });
              var t = function () {
                Ur(), _.focus();
              };
              (function (e, t) {
                for (var n = e.parentElement; n; ) {
                  if (n && t(n)) return n;
                  n = n.parentElement;
                }
                return null;
              })(e, function (e) {
                return "LABEL" === e.nodeName;
              }) ||
                (n.addEventListener(e, "click", t),
                p.push(function () {
                  n.removeEventListener(e, "click", t);
                }));
              var r = e.getAttribute("id"),
                a = r
                  ? document.querySelector("label[for='".concat(r, "']"))
                  : null;
              a &&
                (n.addEventListener(a, "click", t),
                p.push(function () {
                  n.removeEventListener(a, "click", t);
                }));
            }
          },
          unmount: function () {
            for (; p.length; ) p.pop()();
            f.unmount();
          },
          collapse: function () {
            f.collapse();
          },
          _frame: f,
        };
      },
      Da = function (e) {
        var t = e.options,
          n = s(e, ["options"]),
          a = t.controller,
          o = t.componentName,
          i = t.publicOptions,
          c = s(t, ["controller", "componentName", "publicOptions"]),
          u = (function (e) {
            switch (e) {
              case "authentication":
              case "payment":
              case "shippingAddress":
                return e;
              default:
                throw new Error("Unexpected element type for implementation");
            }
          })(o),
          l = Na(u, i || {}, "elements.create('".concat(u, "')"), !1);
        l.warnings.forEach(function (e) {
          return a.warn(e);
        });
        var p = xa(
            Object(r.a)(
              Object(r.a)({}, n),
              {},
              {
                options: Object(r.a)(
                  Object(r.a)({}, c),
                  {},
                  { controller: a, componentName: u, publicOptions: l.value }
                ),
              }
            )
          ),
          d = p.update,
          f = s(p, ["update"]);
        return Object(r.a)(
          {
            update: function (e) {
              var t = Na(u, e || {}, "".concat(u, ".update()"), !0);
              t.warnings.forEach(function (e) {
                return a.warn(e);
              }),
                d(t.value);
            },
          },
          f
        );
      },
      Ba = function (e, t) {
        var n = (function (e) {
          if (!zt[e])
            throw new Error("Unexpected Element type: ".concat(e, "."));
          return zt[e].implementation;
        })(e);
        switch (n) {
          case "legacy":
            return new Jr(t);
          case "afterpay_message":
            return ea(t);
          case "frame":
            return Da(t);
          default:
            return Object(l.a)(
              n,
              "Unexpected implementation type: ".concat(n, ".")
            );
        }
      },
      qa = (function (e) {
        Object(ae.a)(n, e);
        var t = Object(oe.a)(n);
        function n(e, o, i) {
          var c;
          Object(a.a)(this, n),
            ((c = t.call(this)).mount = de(function (e) {
              var t;
              if ((c._checkDestroyed(), !e))
                throw new u.a(
                  "Missing argument. Make sure to call mount() with a valid DOM element or selector."
                );
              if ("string" == typeof e) {
                var n = document.querySelectorAll(e);
                if (
                  (n.length > 1 &&
                    c._controller.warn(
                      "The selector you specified ("
                        .concat(e, ") applies to ")
                        .concat(
                          n.length,
                          " DOM elements that are currently on the page.\nThe Stripe Element will be mounted to the first one."
                        )
                    ),
                  !n.length)
                )
                  throw new u.a(
                    "The selector you specified (".concat(
                      e,
                      ") applies to no DOM elements that are currently on the page.\nMake sure the element exists on the page before calling mount()."
                    )
                  );
                t = n[0];
              } else {
                if (!e.appendChild)
                  throw new u.a(
                    "Invalid DOM element. Make sure to call mount() with a valid DOM element or selector."
                  );
                t = e;
              }
              if ("INPUT" === t.nodeName)
                throw new u.a(
                  "Stripe Elements must be mounted in a DOM element that\ncan contain child nodes. `input` elements are not permitted to have child\nnodes. Try using a `div` element instead."
                );
              t.children.length &&
                c._controller.warn(
                  "This Element will be mounted to a DOM element that contains child nodes."
                ),
                c._mountToParent(t);
            })),
            (c.update = de(function (e) {
              return (
                c._checkDestroyed(),
                c._implementation.update(e),
                Object(ve.a)(c)
              );
            })),
            (c.focus = de(function (e) {
              return (
                c._checkDestroyed(),
                e && e.preventDefault(),
                c._implementation.focus(),
                Object(ve.a)(c)
              );
            })),
            (c.blur = de(function () {
              return (
                c._checkDestroyed(), c._implementation.blur(), Object(ve.a)(c)
              );
            })),
            (c.clear = de(function () {
              return (
                c._checkDestroyed(), c._implementation.clear(), Object(ve.a)(c)
              );
            })),
            (c.collapse = de(function () {
              if ((c._checkDestroyed(), !c._implementation.collapse))
                throw new u.a(
                  "Collapse is not supported by the ".concat(
                    c._componentName,
                    " Element."
                  )
                );
              return c._implementation.collapse(), Object(ve.a)(c);
            })),
            (c.unmount = de(function () {
              return c._checkDestroyed(), c._unmount(), Object(ve.a)(c);
            })),
            (c.destroy = de(function () {
              return (
                c._checkDestroyed(),
                c.unmount(),
                (c._destroyed = !0),
                c._emitEvent("destroy"),
                Object(ve.a)(c)
              );
            })),
            (c._getParent = function () {
              return c._parent;
            }),
            (c._emitEvent = function (e, t) {
              return (
                "loaderror" !== e ||
                  c._hasRegisteredListener("loaderror") ||
                  c._controller.keyMode() !== b.test ||
                  console.error(
                    "Unhandled ".concat(c._componentName, " Element loaderror"),
                    t
                  ),
                c._emit(e, Object(r.a)({ elementType: c._componentName }, t))
              );
            });
          var s = e.controller,
            l = e.componentName;
          (c._controller = s), (c._componentName = l), (c._destroyed = !1);
          var p = document.createElement("div");
          return (
            (p.className = Wt),
            (c._component = p),
            (c._implementation = Ba(c._componentName, {
              options: e,
              component: p,
              listenerRegistry: o,
              elementTimings: i,
              emitEvent: c._emitEvent,
              getParent: c._getParent,
              selfDestruct: function () {
                c.destroy();
              },
            })),
            c
          );
        }
        return (
          Object(o.a)(n, [
            {
              key: "_checkDestroyed",
              value: function () {
                if (this._destroyed)
                  throw new u.a(
                    "This Element has already been destroyed. Please create a new one."
                  );
              },
            },
            {
              key: "_isMounted",
              value: function () {
                return (
                  !!document.body && document.body.contains(this._component)
                );
              },
            },
            {
              key: "_unmount",
              value: function () {
                var e = this._component.parentElement;
                e && e.removeChild(this._component),
                  this._implementation.unmount(),
                  (this._parent = null);
              },
            },
            {
              key: "_mountToParent",
              value: function (e) {
                var t = this._component.parentElement,
                  n = this._isMounted();
                if (e === t) {
                  if (n) return;
                  this.unmount(), this._mountTo(e);
                } else if (t) {
                  if (n)
                    throw new u.a(
                      "This Element is already mounted. Use `unmount()` to unmount the Element before re-mounting."
                    );
                  this.unmount(), this._mountTo(e);
                } else this._mountTo(e);
              },
            },
            {
              key: "_mountTo",
              value: function (e) {
                for (this._parent = e; e.firstChild; )
                  e.removeChild(e.firstChild);
                e.appendChild(this._component), this._implementation.mount();
              },
            },
          ]),
          n
        );
      })(ye),
      Fa = function (e, t) {
        e._controller.report("legacy_private_property_used", {
          prop: t,
          componentName: e._componentName,
        });
      };
    [
      "_autofilled",
      "_classes",
      "_complete",
      "_empty",
      "_fakeInput",
      "_focused",
      "_frame",
      "_invalid",
      "_lastBackgroundColor",
      "_lastFontSize",
      "_lastHeight",
      "_lastPadding",
      "_lastSubmittedAt",
      "_listenerRegistry",
      "_paymentRequest",
    ].forEach(function (e) {
      Object.defineProperty(qa.prototype, e, {
        enumerable: !1,
        get: function () {
          return Fa(this, e), this._implementation[e];
        },
      });
    });
    ["_formSubmit", "_isIssuingElement"].forEach(function (e) {
      Object.defineProperty(qa.prototype, e, {
        enumerable: !1,
        writable: !1,
        value: function () {
          return Fa(this, e), this._implementation[e]();
        },
      });
    });
    var Ua,
      Ha = qa,
      Ya = {
        locale: S(D),
        fonts: S(z(G)),
        betas: S(z(R.apply(void 0, Object(i.a)(Ut)))),
      },
      Ga = $(Ya),
      za = function e(t, n, o, c) {
        var l = this;
        Object(a.a)(this, e),
          (this.getElement = de(function (e) {
            var t,
              n =
                (null != (t = e) &&
                t.__elementType &&
                "string" == typeof t.__elementType &&
                "function" == typeof t
                  ? t.__elementType
                  : null) || e;
            return (
              vn(n, l._betas),
              Object(p.a)(l._elements, function (e) {
                return e._componentName === n;
              }) || null
            );
          })),
          (this.create = fe(function (e, t) {
            var n = new Bt.a();
            !(function (e, t, n) {
              if ((vn(e, n), zt[e].unique && -1 !== t.indexOf(e)))
                throw new u.a(
                  "Can only create one Element of type ".concat(e, ".")
                );
              var r = zt[e].conflict,
                a = Object(p.e)(t, r);
              if (a.length) {
                var o = a[0];
                throw new u.a(
                  "Cannot create an Element of type "
                    .concat(e, " after an Element of type ")
                    .concat(o, " has already been created.")
                );
              }
            })(
              e,
              l._elements.map(function (e) {
                return e._componentName;
              }),
              l._betas
            );
            var a = Object(r.a)(
                Object(r.a)(Object(r.a)({}, t), l._commonOptions),
                {},
                { componentName: e, groupId: l._id }
              ),
              o = (a.paymentRequest, s(a, ["paymentRequest"])),
              c = (Ce || Ne) && Object(ie.a)(o).length > 2e3,
              d = !!l._pendingFonts || c,
              f = new Ha(
                Object(r.a)(
                  Object(r.a)({ publicOptions: t }, l._commonOptions),
                  {},
                  {
                    componentName: e,
                    groupId: l._id,
                    fonts: c ? null : l._commonOptions.fonts,
                    controller: l._controller,
                    wait: d,
                  }
                ),
                l._listenerRegistry,
                Object(r.a)(
                  Object(r.a)({}, l._timings),
                  {},
                  { createTimestamp: n }
                )
              );
            return (
              (l._elements = [].concat(Object(i.a)(l._elements), [f])),
              f._on("destroy", function () {
                l._elements = l._elements.filter(function (t) {
                  return t._componentName !== e;
                });
              }),
              c && f._implementation.update({ fonts: l._commonOptions.fonts }),
              f
            );
          }));
        var d,
          f = new Bt.a(),
          m = Z(Ga, c || {}, "elements()"),
          _ = m.value;
        m.warnings.forEach(function (e) {
          return t.warn(e);
        }),
          (d = t.warn),
          dn("width=device-width") ||
            d(
              'Elements requires "width=device-width" be set in your page\'s viewport meta tag.\n       For more information: https://stripe.com/docs/js/appendix/viewport_meta_requirements'
            ),
          t.report("elements", { options: _ });
        var h = _.betas,
          y = void 0 === h ? [] : h,
          b = _.fonts,
          v = void 0 === b ? [] : b,
          E = _.locale,
          w = s(_, ["betas", "fonts", "locale"]);
        (this._elements = []),
          (this._id = ne("elements")),
          (this._timings = Object(r.a)(
            Object(r.a)({}, o),
            {},
            { groupCreateTimestamp: f }
          )),
          (this._controller = t),
          (this._betas = y),
          (this._listenerRegistry = n);
        var O = bn(E, y);
        this._controller.action.fetchLocale({ locale: O || "auto" });
        var k = v
            .filter(function (e) {
              return !e.cssSrc || "string" != typeof e.cssSrc;
            })
            .map(function (e) {
              return Object(r.a)(
                Object(r.a)({}, e),
                {},
                { __resolveFontRelativeTo: window.location.href }
              );
            }),
          j = v
            .map(function (e) {
              return e.cssSrc;
            })
            .reduce(function (e, t) {
              return "string" == typeof t ? [].concat(Object(i.a)(e), [t]) : e;
            }, [])
            .map(function (e) {
              return Object(g.b)(e) ? e : Object(g.c)(window.location.href, e);
            });
        return (
          (this._pendingFonts = j.length),
          (this._commonOptions = Object(r.a)(
            Object(r.a)({}, w),
            {},
            { betas: y, locale: O, fonts: k }
          )),
          j.forEach(function (e) {
            if ("string" == typeof e) {
              var t = new Bt.a();
              yn(e)
                .then(function (n) {
                  l._controller.report("font.loaded", {
                    load_time: t.getElapsedTime(),
                    font_count: n.length,
                    css_src: e,
                  });
                  var a = n.map(function (t) {
                    return Object(r.a)(
                      Object(r.a)({}, t),
                      {},
                      { __resolveFontRelativeTo: e }
                    );
                  });
                  l._controller.action.updateCSSFonts({
                    fonts: a,
                    groupId: l._id,
                  }),
                    (l._commonOptions = Object(r.a)(
                      Object(r.a)({}, l._commonOptions),
                      {},
                      {
                        fonts: [].concat(
                          Object(i.a)(
                            l._commonOptions.fonts ? l._commonOptions.fonts : []
                          ),
                          Object(i.a)(a)
                        ),
                      }
                    ));
                })
                .catch(function (n) {
                  l._controller.report("error.font.not_loaded", {
                    load_time: t.getElapsedTime(),
                    message: n && n.message && n.message,
                    css_src: e,
                  }),
                    l._controller.warn(
                      "Failed to load CSS file at ".concat(e, ".")
                    );
                });
            }
          }),
          this
        );
      },
      Wa = function (e, t, n, r, a, o, i) {
        return new Ar({
          controller: e,
          authentication: t,
          mids: n,
          rawOptions: r,
          betas: a,
          queryStrategyOverride: o,
          listenerRegistry: i,
        });
      },
      Ka = $({
        name: N("react-stripe-js", "stripe-js", "react-stripe-elements"),
        version:
          ((Ua = D),
          function (e, t) {
            return null === e ? w(e) : Ua(e, t);
          }),
        startTime: S(F),
      }),
      Va = J({
        name: C(1, 30),
        partner_id: S(I("pp_partner_")),
        version: S(C(5, 15)),
        url: S(C(4, 60)),
      }),
      Ja = "publishable",
      $a = "secret",
      Xa = "ephemeral",
      Za = "restricted",
      Qa = "unknown",
      eo = function (e) {
        if ("" === e)
          throw new u.a(
            "Please call Stripe() with your publishable key. You used an empty string."
          );
        switch (
          (function (e) {
            switch (e.split("_", 1)[0]) {
              case "pk":
                return Ja;
              case "sk":
                return $a;
              case "ek":
                return Xa;
              case "rk":
                return Za;
              default:
                return Qa;
            }
          })(e)
        ) {
          case $a:
            throw new u.a(
              "You should not use your secret key with Stripe.js.\n          Please pass a publishable key instead."
            );
          case Xa:
            throw new u.a(
              "You should not use an ephemeral key with Stripe.js.\n          Please pass a publishable key instead."
            );
          case Za:
            throw new u.a(
              "You should not use a restricted key with Stripe.js.\n          Please pass a publishable key instead."
            );
        }
      },
      to = ["elements", "createToken", "createPaymentMethod"],
      no = ["elements", "createSource", "createToken", "createPaymentMethod"],
      ro = (function () {
        function e(t) {
          var n = this;
          Object(a.a)(this, e),
            (this._gets = []),
            (this._didDetect = !1),
            (this._onDetection = function (e) {
              (n._didDetect = !0), t(e);
            }),
            window.Stripe &&
              window.Stripe.__cachedInstances &&
              this._onDetection("react-stripe-elements");
        }
        return (
          Object(o.a)(e, [
            {
              key: "got",
              value: function (e) {
                this._didDetect ||
                  ("elements" === e
                    ? (this._gets = ["elements"])
                    : this._gets.push(e),
                  this._checkForWrapper());
              },
            },
            {
              key: "called",
              value: function (e) {
                this._didDetect ||
                  (this._gets = this._gets.filter(function (t) {
                    return t !== e;
                  }));
              },
            },
            {
              key: "_checkForWrapper",
              value: function () {
                Object(p.c)(this._gets, to)
                  ? this._onDetection("react-stripe-js")
                  : Object(p.c)(this._gets, no) &&
                    this._onDetection("react-stripe-elements");
              },
            },
          ]),
          e
        );
      })(),
      ao = function (e) {
        if (!e || "object" != typeof e) return null;
        var t = e.type;
        return { type: "string" == typeof t ? t : null, data: s(e, ["type"]) };
      },
      oo = function (e) {
        switch (e.type) {
          case "object":
            return { source: e.object };
          case "error":
            return { error: e.error };
          default:
            return Object(l.a)(e);
        }
      },
      io = {
        source: $({ id: I("src_"), client_secret: I("src_client_secret_") }),
      },
      co = $(io),
      so = function (e) {
        switch (e.type) {
          case "object":
            return { paymentMethod: e.object };
          case "error":
            return { error: e.error };
          default:
            return Object(l.a)(e);
        }
      },
      uo = function (e, t, n, r, a) {
        if ("string" == typeof n)
          return (function (e, t, n, r, a) {
            var o = ia(r),
              i = ao(o ? a : r),
              c = i || { type: null, data: {} },
              s = c.type,
              l = c.data;
            if (s && n !== s)
              return ce.a.reject(
                new u.a(
                  "The type supplied in payment_method_data is not consistent."
                )
              );
            if (o) {
              var p = o._implementation._frame.id,
                d = o._componentName;
              return e.action
                .createPaymentMethodWithElement({
                  frameId: p,
                  elementName: d,
                  type: n,
                  paymentMethodData: l,
                  mids: t,
                })
                .then(so);
            }
            return i
              ? e.action
                  .createPaymentMethodWithData({
                    elementName: null,
                    type: n,
                    paymentMethodData: l,
                    mids: t,
                  })
                  .then(so)
              : ce.a.reject(
                  new u.a(
                    "Please provide either an Element or PaymentMethod creation parameters to createPaymentMethod."
                  )
                );
          })(e, t, n, r, a);
        try {
          var o = ((d = n), Z(Ea(null), d, "createPaymentMethod").value),
            i = o.element,
            c = o.type,
            s = o.data;
          if (i) {
            var l = i._implementation._frame.id,
              p = i._componentName;
            return e.action
              .createPaymentMethodWithElement({
                frameId: l,
                elementName: p,
                type: c,
                paymentMethodData: s,
                mids: t,
              })
              .then(so);
          }
          return e.action
            .createPaymentMethodWithData({
              elementName: null,
              type: c,
              paymentMethodData: s,
              mids: t,
            })
            .then(so);
        } catch (e) {
          return ce.a.reject(e);
        }
        var d;
      },
      lo = function (e) {
        return new ce.a(function (t, n) {
          var r = setTimeout(function () {
            t({
              type: "error",
              error: {
                code: "redirect_error",
                message: "Failed to redirect to ".concat(e),
              },
              locale: "en",
            });
          }, 6e4);
          window.addEventListener("pagehide", function () {
            clearTimeout(r);
          }),
            (window.top.location.href = e);
        });
      },
      po = function (e, t, n) {
        e.report("redirect_error", { initiator: t, error: n.error });
      },
      fo = function (e) {
        var t = e
          .split(/(?=[A-Z])/)
          .join("-")
          .toLowerCase();
        return "https://stripe.com/docs/stripe-js/reference#stripe-".concat(t);
      },
      mo = function (e, t) {
        return Z(ba, e, "stripe.".concat(t, " intent secret")).value;
      },
      _o = function (e, t) {
        return Z(va, e, "stripe.".concat(t, " intent secret")).value;
      },
      ho = function (e, t) {
        return Z(wa, t, e).value;
      },
      yo = function (e, t, n, r) {
        if ("valid" === X(oa, n, t).type)
          throw new u.a(
            "Do not pass an Element to stripe.".concat(t, "() directly.\n") +
              "For more information: ".concat(fo(t))
          );
        var a = Z(Oa(e, t), n, t).value,
          o = a.source,
          i = a.paymentMethodData,
          c = a.paymentMethodOptions,
          s = a.paymentMethod,
          l = a.otherParams;
        if (null != o && (null != i || null != s))
          throw new u.a(
            "".concat(
              t,
              ": Expected either source or payment_method, but not both."
            )
          );
        if (i) {
          if (i.element)
            return {
              mode: {
                tag: "paymentMethod-from-element",
                type: e,
                elementName: i.element._componentName,
                frameId: i.element._implementation._frame.id,
                data: i.data,
                options: c,
                intentSecret: r,
              },
              otherParams: l,
            };
          if (e)
            return {
              mode: {
                tag: "paymentMethod-from-data",
                type: e,
                data: i.data,
                options: c,
                intentSecret: r,
              },
              otherParams: l,
            };
        } else {
          if (s)
            return {
              mode: {
                tag: "paymentMethod",
                paymentMethod: s,
                options: c,
                intentSecret: r,
              },
              otherParams: l,
            };
          if (o)
            return {
              mode: { tag: "source", source: o, intentSecret: r },
              otherParams: l,
            };
        }
        return { mode: { tag: "none", intentSecret: r }, otherParams: l };
      },
      bo = function (e, t) {
        var n = e.split("#"),
          r = Object(jt.a)(n, 2),
          a = r[0],
          o = r[1],
          i = a.split("?"),
          c = Object(jt.a)(i, 2),
          s = c[0],
          u = c[1],
          l = "?",
          p =
            "payment_intent" === t.object
              ? [
                  "payment_intent",
                  "payment_intent_client_secret",
                  "redirect_status",
                ]
              : [
                  "setup_intent",
                  "setup_intent_client_secret",
                  "redirect_status",
                ];
        (u || "").split("&").forEach(function (e, t) {
          var n = e.split("="),
            r = Object(jt.a)(n, 1)[0];
          -1 === p.indexOf(r) &&
            (l += "".concat("?" === l ? "" : "&").concat(e));
        });
        var d = "payment_intent" === t.object ? "payment" : "setup";
        (l += ""
          .concat("?" === l ? "" : "&")
          .concat(d, "_intent=")
          .concat(t.id)),
          (l += "&"
            .concat(d, "_intent_client_secret=")
            .concat(t.client_secret));
        var f = s + (l += "&redirect_status=succeeded");
        return o ? "".concat(f, "#").concat(o) : f;
      },
      vo = { type: "validation_error", code: "incomplete_payment_details" },
      go = { type: "validation_error", code: "unexpected" },
      Eo = function (e, t) {
        var n = {
          skipFingerprint: !1,
          sandboxFingerprintFrame: !1,
          sandboxChallengeFrame: !1,
        };
        return (
          -1 !== e.indexOf("Y") &&
            (t.report("3ds2.optimization.Y"), (n.skipFingerprint = !0)),
          -1 !== e.indexOf("k") &&
            (t.report("3ds2.optimization.k"), (n.sandboxFingerprintFrame = !0)),
          -1 !== e.indexOf("5") &&
            (t.report("3ds2.optimization.5"), (n.sandboxChallengeFrame = !0)),
          n
        );
      },
      wo = function (e) {
        return (
          {
            american_express: "amex",
            visa: "visa",
            mastercard: "mastercard",
            discover: "discover",
          }[e] || "unknown"
        );
      },
      Oo = function (e, t, n) {
        if (!e) return null;
        if ("use_stripe_sdk" === e.type) {
          var r = e.use_stripe_sdk;
          switch (r.type) {
            case "stripe_3ds2_fingerprint":
              return {
                type: "3ds2-fingerprint",
                threeDS2Source: r.three_d_secure_2_source,
                merchant: r.merchant,
                cardBrand: wo(r.directory_server_name),
                transactionId: r.server_transaction_id,
                optimizations: Eo(r.three_ds_optimizations, n),
                methodUrl: r.three_ds_method_url,
                oneClickAuthn: r.one_click_authn
                  ? {
                      amount: r.one_click_authn.amount,
                      credentials: r.one_click_authn.credentials,
                      authenticationChallenge:
                        r.one_click_authn.authentication_challenge,
                    }
                  : null,
              };
            case "stripe_3ds2_challenge":
              return {
                type: "3ds2-challenge",
                threeDS2Source: r.stripe_js.three_d_secure_2_source,
                cardBrand: wo(r.stripe_js.directory_server_name),
                transactionId: r.stripe_js.server_transaction_id,
                optimizations: Eo(r.stripe_js.three_ds_optimizations, n),
                acsTransactionId: r.stripe_js.acs_transaction_id,
                acsUrl: r.stripe_js.acs_url,
                creq: r.stripe_js.creq,
              };
            case "three_d_secure_redirect":
              return { type: "3ds1-modal", url: r.stripe_js, source: r.source };
          }
        }
        if ("redirect_to_url" === e.type)
          return { type: "redirect", redirectUrl: e.redirect_to_url.url };
        if ("alipay_handle_redirect" === e.type)
          return {
            type: "redirect",
            redirectUrl: e.alipay_handle_redirect.url,
          };
        if ("boleto_display_details" === e.type)
          return {
            type: "boleto-display",
            hostedVoucherUrl: e.boleto_display_details.hosted_voucher_url,
          };
        if ("display_oxxo_details" === e.type)
          return {
            type: "oxxo-display",
            hostedVoucherUrl: e.display_oxxo_details.hosted_voucher_url,
          };
        if ("konbini_display_details" === e.type)
          return {
            type: "konbini-display",
            hostedVoucherUrl: e.konbini_display_details.hosted_voucher_url,
          };
        if ("oxxo_display_details" === e.type)
          return {
            type: "oxxo-display",
            hostedVoucherUrl: e.oxxo_display_details.hosted_voucher_url,
          };
        if ("authorize_with_url" === e.type) {
          n.report("unexpected_action_type", { action: "authorize_with_url" });
          var a = e.authorize_with_url.url;
          if (!t) return { type: "redirect", redirectUrl: a };
          switch (t) {
            case ca.card:
              return { type: "3ds1-modal", url: a, source: null };
            case ca.ideal:
              return { type: "redirect", redirectUrl: a };
          }
        }
        return "upi_await_notification" === e.type
          ? { type: "upi_await_notification" }
          : "verify_with_linked_account" === e.type
          ? { type: "us_bank_account_link" }
          : "wechat_pay_display_qr_code" === e.type
          ? {
              type: "wechat_pay_display_qr_code",
              qrCodeUrl: e.wechat_pay_display_qr_code.image_data_url,
            }
          : null;
      },
      ko = function (e) {
        switch (e.type) {
          case "error":
            return { error: e.error };
          case "object":
            switch (e.object.object) {
              case "payment_intent":
                return { paymentIntent: e.object };
              case "setup_intent":
                return { setupIntent: e.object };
              default:
                return Object(l.a)(e.object);
            }
          default:
            return Object(l.a)(e);
        }
      },
      jo = function (e, t, n, r) {
        return t === Q.g.PAYMENT_INTENT
          ? n.action
              .retrievePaymentIntent({
                hosted: false,
                intentSecret: e,
                locale: r,
                asErrorIfNotSucceeded: true,
              })
              .then(ko)
          : n.action
              .retrieveSetupIntent({
                hosted: false,
                intentSecret: e,
                locale: r,
                asErrorIfNotSucceeded: true,
              })
              .then(ko);
      },
      Po = function (e, t, n, r, a) {
        return t === Q.g.PAYMENT_INTENT
          ? n.action
              .cancelPaymentIntentSource({
                intentSecret: e,
                locale: a,
                sourceId: r,
              })
              .then(ko)
          : n.action
              .cancelSetupIntentSource({
                intentSecret: e,
                locale: a,
                sourceId: r,
              })
              .then(ko);
      },
      So = function (e) {
        return (
          (e.error
            ? e.error.payment_intent || e.error.setup_intent
            : e.paymentIntent || e.setupIntent) || null
        );
      },
      To = function (e, t, n, a, o) {
        var i = pn(),
          c = new Bt.a(),
          s = (function (e, t, n, a, o) {
            return e.createLightboxFrame({
              type: Q.c.AUTHORIZE_WITH_URL,
              options: Object(r.a)(
                { url: t, locale: o, intentId: n },
                a ? { source: a } : {}
              ),
            });
          })(a, e.url, t.id, e.source, o);
        return (
          s.show(),
          a.report("authorize_with_url.loading", {
            viewport: i,
            intentId: t.id,
          }),
          s._on("load", function () {
            a.report("authorize_with_url.loaded", {
              loadDuration: c.getElapsedTime(),
              intentId: t.id,
            }),
              s.fadeInBackdrop();
          }),
          s._on("challenge_complete", function () {
            s.fadeOutBackdrop();
          }),
          new ce.a(function (r, i) {
            var u = e.source;
            u &&
              s._once("cancel", function () {
                ce.a.all([Po(t, n, a, u, o), s.destroy()]).then(function (e) {
                  var t = Object(jt.a)(e, 1)[0];
                  return r(t);
                });
              }),
              s._once("authorize_with_url_done", function () {
                var e = s.destroy();
                !(function (e, t, n, r, a) {
                  var o,
                    i = !0,
                    c = 3,
                    s = 0;
                  (function u() {
                    (s += 1),
                      jo(e, t, n, r).then(function (e) {
                        if (i) {
                          var t = So(e);
                          if (null !== t)
                            switch (((c = 3), t.status)) {
                              case "requires_action":
                              case "requires_source_action":
                                return void (o = setTimeout(u, 5e3));
                              case "processing":
                                return void (o = setTimeout(u, 1e3));
                              default:
                                a(e, s);
                            }
                          else if (c > 0) {
                            var n = 500 * Math.pow(2, 3 - c);
                            (o = setTimeout(u, n)), (c -= 1);
                          } else a(e, s);
                        }
                      });
                  })();
                })(t, n, a, o, function (n, o) {
                  e.then(function () {
                    a.report("authorize_with_url.done", {
                      shownDuration: c.getElapsedTime(),
                      success: !("error" in n),
                      intentId: t.id,
                      iterations: o,
                    }),
                      r(n);
                  });
                });
              });
          })
        );
      },
      Ao = function (e, t) {
        var n = t.intentSecret,
          r = t.controller,
          a = t.locale,
          o = t.hosted,
          i = r.createLightboxFrame({
            type: Q.c.STRIPE_3DS2_CHALLENGE,
            options: { intentId: n.id, hosted: o, locale: a },
          });
        r.report("3ds2.challenge_frame.loading", { intentId: n.id, hosted: o }),
          i._on("challenge_complete", function () {
            i.fadeOutBackdrop();
          });
        var c = (function (e) {
          return new ce.a(function (t) {
            e._on("load", function () {
              return t(e);
            });
          });
        })(i);
        return (
          c.then(function () {
            return r.report("3ds2.challenge_frame.loaded", {
              intentId: n.id,
              hosted: o,
            });
          }),
          o && (i.show(), i.action.show3DS2Spinner({ cardBrand: e.cardBrand })),
          c
        );
      },
      Io = function (e, t, n) {
        var a = n.challengeFrame,
          o = t.controller,
          i = t.intentSecret,
          c = t.intentType,
          u = t.locale,
          l = t.hosted;
        return new ce.a(function (t) {
          a.then(function (n) {
            n._once("cancel", function () {
              n.fadeOutBackdrop(), Po(i, c, o, e.threeDS2Source, u).then(t);
            }),
              l || (n.show(), n.fadeInBackdrop());
            e.type;
            var a = e.optimizations,
              p = s(e, ["type", "optimizations"]);
            n.action
              .perform3DS2Challenge(
                Object(r.a)(
                  Object(r.a)({}, p),
                  {},
                  { shouldSandbox: a.sandboxChallengeFrame }
                )
              )
              .then(function () {
                t();
              });
          });
        });
      },
      Co = function (e) {
        if (!e || "object" != typeof e || (!e.type && !e.code)) return e;
        var t = function (t) {
          return e[t] && "string" == typeof e[t]
            ? Object(c.a)({}, "".concat(t, "_id"), e[t])
            : e[t] && "object" == typeof e[t] && "string" == typeof e[t].id
            ? Object(c.a)({}, "".concat(t, "_id"), e[t].id)
            : null;
        };
        return Object(r.a)(
          Object(r.a)(
            Object(r.a)(
              Object(r.a)(
                { type: e.type, code: e.code, param: e.param },
                t("payment_intent")
              ),
              t("setup_intent")
            ),
            t("payment_method")
          ),
          t("source")
        );
      },
      No = function (e, t) {
        var n = t.existingPayload,
          a = t.challengeFrame,
          o = t.startTimestamp,
          i = e.intentSecret,
          c = e.intentType,
          s = e.controller,
          u = e.locale,
          l = e.hosted,
          p = n ? ce.a.resolve(n) : jo(i, c, s, u);
        return ce.a
          .all([
            p,
            a.then(function (e) {
              return e.destroy();
            }),
          ])
          .then(function (e) {
            var t = Object(jt.a)(e, 1)[0];
            return (
              s.report(
                "3ds2.done",
                Object(r.a)(
                  {
                    intentId: i.id,
                    hosted: l,
                    totalDuration: o.getElapsedTime(),
                  },
                  t.error
                    ? { error: Co(t.error), success: !1 }
                    : { success: !0 }
                )
              ),
              t
            );
          });
      },
      Ro = function (e) {
        var t = e.intentSecret,
          n = e.controller,
          r = e.hosted,
          a = e.locale,
          o = n.createHiddenFrame(Q.c.STRIPE_3DS2_FINGERPRINT, {
            intentId: t.id,
            locale: a,
            hosted: r,
          });
        n.report("3ds2.fingerprint_frame.loading", {
          hosted: r,
          intentId: t.id,
        });
        var i = (function (e) {
          return new ce.a(function (t) {
            e._on("load", function () {
              return t(e);
            });
          });
        })(o);
        return (
          i.then(function () {
            n.report("3ds2.fingerprint_frame.loaded", {
              hosted: r,
              intentId: t.id,
            });
          }),
          i
        );
      },
      Mo = function (e, t) {
        var n = t.intentSecret,
          r = t.controller,
          a = t.hosted;
        return e.optimizations.skipFingerprint
          ? ce.a.resolve({ fingerprintAttempted: !1, fingerprintData: null })
          : "" === e.methodUrl
          ? (r.report("3ds2.fingerprint.no_method_url", {
              hosted: a,
              intentId: n.id,
            }),
            ce.a.resolve({ fingerprintAttempted: !1, fingerprintData: null }))
          : Ro(t).then(function (t) {
              return t.action
                .perform3DS2Fingerprint({
                  threeDS2Source: e.threeDS2Source,
                  merchant: e.merchant,
                  transactionId: e.transactionId,
                  methodUrl: e.methodUrl,
                  shouldSandbox: e.optimizations.sandboxFingerprintFrame,
                })
                .then(function (e) {
                  return t.destroy(), e;
                });
            });
      },
      Lo = function (e, t, n) {
        var a = t.controller,
          o = n.startTimestamp,
          i = e.oneClickAuthn;
        if (
          void 0 === window.PaymentCredential ||
          !i ||
          0 === i.credentials.length
        )
          return ce.a.resolve(null);
        try {
          var c = [
              {
                supportedMethods: "secure-payment-confirmation",
                data: {
                  action: "authenticate",
                  credentialIds: i.credentials.map(function (e) {
                    return _a(e.id);
                  }),
                  networkData: _a(i.authenticationChallenge),
                  timeout: 6e4,
                  fallbackUrl: window.location.toString(),
                },
              },
            ],
            s = { total: { label: "Total", amount: i.amount } };
          return new window.PaymentRequest(c, s)
            .show()
            .then(function (t) {
              t.complete("success"),
                a.report("3ds2.secure_payment_confirmation.completed", {
                  source: e.threeDS2Source,
                  timeToCompleteSecurePaymentConfirmation: o.getElapsedTime(),
                });
              var n = JSON.parse(t.details.challenge);
              return {
                type: "spc",
                assertion: {
                  type: "public-key",
                  id: t.details.info.id,
                  raw_id: t.details.info.id,
                  response: {
                    authenticator_data: ha(t.details.info.authenticator_data),
                    client_data_json: ha(t.details.info.client_data_json),
                    signature: ha(t.details.signature),
                  },
                },
                payment_data: {
                  merchant_data: {
                    merchant_origin: n.merchantData.merchantOrigin,
                    total: n.merchantData.total,
                  },
                  network_data: n.networkData,
                },
              };
            })
            .catch(function (t) {
              return (
                a.report(
                  "3ds2.secure_payment_confirmation.payment_request_error",
                  {
                    source: e.threeDS2Source,
                    error: Object(r.a)({ name: t.name, message: t.message }, t),
                  }
                ),
                null
              );
            });
        } catch (t) {
          a.report("3ds2.secure_payment_confirmation.unexpected_error", {
            source: e.threeDS2Source,
            error: Object(r.a)({ name: t.name, message: t.message }, t),
          });
        }
        return ce.a.resolve(null);
      },
      xo = function (e, t) {
        var n = new Bt.a(),
          r = Ao(e, t);
        switch (e.type) {
          case "3ds2-challenge":
            return Io(e, t, { challengeFrame: r }).then(function (e) {
              return No(t, {
                existingPayload: e,
                challengeFrame: r,
                startTimestamp: n,
              });
            });
          case "3ds2-fingerprint":
            return ce.a
              .all([Mo(e, t), Lo(e, t, { startTimestamp: n })])
              .then(function (n) {
                var r = Object(jt.a)(n, 2),
                  a = r[0],
                  o = r[1];
                return (function (e, t, n) {
                  var r = n.fingerprintResult,
                    a = n.oneClickAuthnAuthentication,
                    o = t.controller,
                    i = t.hosted,
                    c = t.intentSecret;
                  return (
                    o.report("3ds2.authenticate", {
                      hosted: i,
                      intentId: c.id,
                    }),
                    o.action
                      .authenticate3DS2({
                        threeDS2Source: e.threeDS2Source,
                        outerWindowWidth: window.innerWidth,
                        hosted: i,
                        fingerprintResult: r,
                        oneClickAuthnAuthentication: a,
                      })
                      .then(function (e) {
                        return (
                          "error" === e.type
                            ? o.report("3ds2.authenticate.error", {
                                error: e.error,
                                hosted: i,
                                intentId: c.id,
                              })
                            : o.report("3ds2.authenticate.success", {
                                hosted: i,
                                intentId: c.id,
                              }),
                          e
                        );
                      })
                  );
                })(e, t, {
                  fingerprintResult: a,
                  oneClickAuthnAuthentication: o,
                });
              })
              .then(function (n) {
                return (function (e, t, n) {
                  var r = n.authenticationResult,
                    a = n.challengeFrame,
                    o = t.controller,
                    i = t.hosted,
                    c = t.intentSecret;
                  if ("error" === r.type) return ce.a.resolve();
                  var s = r.object,
                    u = s.state,
                    l = s.ares,
                    p = s.creq;
                  return "delegated" === u
                    ? (o.report(
                        "3ds2.secure_payment_confirmation_authenticated",
                        { hosted: i, intentId: c.id }
                      ),
                      ce.a.resolve())
                    : null === l
                    ? ce.a.resolve()
                    : "C" !== l.transStatus || null == p
                    ? (o.report("3ds2.frictionless", {
                        hosted: i,
                        intentId: c.id,
                      }),
                      ce.a.resolve())
                    : Io(
                        {
                          type: "3ds2-challenge",
                          threeDS2Source: e.threeDS2Source,
                          cardBrand: e.cardBrand,
                          transactionId: e.transactionId,
                          acsUrl: l.acsURL,
                          acsTransactionId: l.acsTransID,
                          optimizations: e.optimizations,
                          creq: p,
                        },
                        t,
                        { challengeFrame: a }
                      );
                })(e, t, { authenticationResult: n, challengeFrame: r });
              })
              .then(function (e) {
                return No(t, {
                  existingPayload: e,
                  challengeFrame: r,
                  startTimestamp: n,
                });
              });
          default:
            return Object(l.a)(e);
        }
      },
      Do = function (e, t) {
        var n = e.createLightboxFrame({ type: Q.c.LIGHTBOX_APP, options: t });
        return (
          n.show(),
          n._on("nested-frame-loaded", function () {
            n.fadeInBackdrop(),
              setTimeout(function () {
                n.action.openLightboxFrame();
              }, 200);
          }),
          n
        );
      },
      Bo = function (e) {
        return e.action.closeLightboxFrame(), e.destroy();
      };
    I("bcsess_");
    var qo = function (e) {
        return "linked-accounts.".concat(e);
      },
      Fo = { CLOSE: qo("close"), COMPLETE: qo("complete") },
      Uo = function (e, t, n, r) {
        var a;
        return (
          (a = r.warn),
          dn("minimum-scale=1") ||
            a(
              'LinkedAccounts requires "minimum-scale=1" to be set in your page\'s viewport meta tag.'
            ),
          r.report("link-accounts.launched", {
            linkAccountSessionCreatorType: t,
            linkAccountSessionCreatorId: n,
          }),
          new ce.a(function (a) {
            var o;
            try {
              o = r.createLightboxFrame({
                type: Q.c.LINKED_ACCOUNTS_INNER,
                options: {
                  clientSecret: e,
                  linkAccountSessionCreatorType: t,
                  linkAccountSessionCreatorId: n,
                  apiKey: r._apiKey,
                },
              });
            } catch (e) {
              return a({ error: { message: e.message } });
            }
            return (
              o.show(),
              o.fadeInBackdrop(),
              o._on(Fo.CLOSE, function () {
                o.fadeOutBackdrop();
              }),
              o._on(Fo.COMPLETE, function (e) {
                o.destroy(!0).then(function () {
                  var t = {};
                  e.error && (t.errorMessage = e.error.message),
                    r.report("link-accounts.complete", t),
                    a(
                      (function (e) {
                        switch (e.type) {
                          case "object":
                            return { linkedAccounts: e.object.data };
                          case "error":
                            return {
                              error: {
                                message:
                                  e.error.message ||
                                  "stripe.linkAccounts: an unknown error occurred.",
                                type: e.error.type,
                              },
                            };
                          default:
                            return Object(l.a)(e);
                        }
                      })(e)
                    );
                });
              }),
              null
            );
          })
        );
      },
      Ho = function (e) {
        var t = e.controller,
          n = e.intentSecret,
          r = e.intentType,
          a =
            (e.locale,
            function (e) {
              return t.action.localizeError(e).then(function (e) {
                return ce.a.resolve({ error: e });
              });
            }),
          o = function (e, t) {
            switch (t) {
              case "requires_action":
                return e;
              case "requires_payment_method":
                return a(vo);
              default:
                return e;
            }
          };
        return "PAYMENT_INTENT" === r
          ? (function (e, t, n) {
              return Uo(e, "payment_intent", t, n);
            })(n.clientSecret, n.id, t).then(function (e) {
              return e.error
                ? a(go)
                : t.action
                    .refreshPaymentIntent({ intentSecret: n })
                    .then(function (e) {
                      var t = la(e);
                      return t.paymentIntent ? o(t, t.paymentIntent.status) : t;
                    });
            })
          : (function (e, t, n) {
              return Uo(e, "setup_intent", t, n);
            })(n.clientSecret, n.id, t).then(function (e) {
              return e.error
                ? a(go)
                : t.action
                    .refreshSetupIntent({ intentSecret: n })
                    .then(function (e) {
                      var t = pa(e);
                      return t.setupIntent ? o(t, t.setupIntent.status) : t;
                    });
            });
      },
      Yo = function (e) {
        switch (e.type) {
          case "error":
            var t = e.error;
            if (
              "payment_intent_unexpected_state" === t.code &&
              "object" == typeof t.payment_intent &&
              null != t.payment_intent &&
              "string" == typeof t.payment_intent.status &&
              fa(t.payment_intent.status)
            ) {
              var n = t.payment_intent;
              return { type: "object", locale: e.locale, object: n };
            }
            return e;
          case "object":
            return e;
          default:
            return Object(l.a)(e);
        }
      },
      Go = function (e, t, n, r, a) {
        var o = Oo(ma(t), n, e),
          i = da(t);
        if (!o) return ce.a.resolve({ paymentIntent: t });
        switch (o.type) {
          case "3ds1-modal":
            return To(o, i, Q.g.PAYMENT_INTENT, e, r);
          case "3ds2-fingerprint":
          case "3ds2-challenge":
            return xo(o, {
              intentSecret: i,
              intentType: Q.g.PAYMENT_INTENT,
              controller: e,
              locale: r,
              hosted: a,
            });
          case "redirect":
            return (function (e, t, n) {
              return lo(t).then(function (t) {
                return po(n, "next_action redirect", t), la(t, e);
              });
            })(t, o.redirectUrl, e);
          case "boleto-display":
            if (void 0 === o.hostedVoucherUrl)
              throw new u.a(
                "Expect `next_action.boleto_display_details.hosted_voucher_url` of `PaymentIntent` to be not undefined. Please refer to \n\nhttps://stripe.com/docs/api/payment_intents/object#payment_intent_object-next_action-boleto_display_details-hosted_voucher_url"
              );
            return (function (e) {
              var t = e.controller,
                n = e.url,
                r = e.intent,
                a = e.locale,
                o = Do(t, {
                  url: n,
                  size: "600x700",
                  locale: a,
                  frameTitle: "boleto.voucher_frame_title",
                  useLightboxHostedCloseButton: !1,
                });
              return new ce.a(function (e) {
                o._on("request-close", function () {
                  Bo(o).then(function () {
                    e({ paymentIntent: r });
                  });
                });
              });
            })({
              controller: e,
              locale: r,
              url: o.hostedVoucherUrl,
              intent: t,
            });
          case "konbini-display":
            if (void 0 === o.hostedVoucherUrl)
              throw new u.a(
                "Expected option `handleActions` to be `false`. The Konbini pilot does not handle the next actions for you automatically yet (e.g. displaying Konbini payment details). Please refer to the Stripe Konbini integration guide for more info: \n\nhttps://stripe.com/docs/payments/konbini"
              );
            return (function (e) {
              var t = e.controller,
                n = e.url,
                r = e.intent,
                a = e.locale,
                o = Do(t, {
                  url: n,
                  size: "600x900",
                  locale: a,
                  frameTitle: "konbini.voucher_frame_title",
                  useLightboxHostedCloseButton: !1,
                });
              return new ce.a(function (e) {
                o._on("request-close", function () {
                  Bo(o).then(function () {
                    e({ paymentIntent: r });
                  });
                });
              });
            })({
              controller: e,
              locale: r,
              url: o.hostedVoucherUrl,
              intent: t,
            });
          case "oxxo-display":
            if (void 0 === o.hostedVoucherUrl)
              throw new u.a(
                "To handle the next actions automatically, set the API version to oxxo_beta=v2. Please refer to the Stripe OXXO integration guide for more info: \n\nhttps://stripe.com/docs/payments/oxxo"
              );
            return (function (e) {
              var t = e.controller,
                n = e.url,
                r = e.intent,
                a = e.locale,
                o = Do(t, {
                  url: n,
                  size: "600x700",
                  locale: a,
                  frameTitle: "oxxo.voucher_frame_title",
                  useLightboxHostedCloseButton: !1,
                });
              return new ce.a(function (e) {
                o._on("request-close", function () {
                  Bo(o).then(function () {
                    e({ paymentIntent: r });
                  });
                });
              });
            })({
              controller: e,
              locale: r,
              url: o.hostedVoucherUrl,
              intent: t,
            });
          case "upi_await_notification":
            return (function (e) {
              var t = e.controller,
                n = e.intentSecret,
                r = e.intentType,
                a = e.locale;
              return new ce.a(function (e) {
                setTimeout(function o() {
                  jo(n, r, t, a).then(function (t) {
                    var n = So(t);
                    if (null !== n)
                      switch (n.status) {
                        case "requires_action":
                          return void setTimeout(o, 1e4);
                        default:
                          e(t);
                      }
                  });
                }, 5e3);
              });
            })({
              controller: e,
              intentSecret: i,
              intentType: Q.g.PAYMENT_INTENT,
              locale: r,
            });
          case "us_bank_account_link":
            return Ho({
              controller: e,
              intentSecret: i,
              intentType: Q.g.PAYMENT_INTENT,
              locale: r,
            });
          case "wechat_pay_display_qr_code":
            return (function (e) {
              var t = e.controller,
                n = e.intent,
                r = e.intentType,
                a = e.intentSecret,
                o = e.locale,
                i = ma(n);
              if (!i || "wechat_pay_display_qr_code" !== i.type)
                throw new Error(
                  "Expected next_action.wechat_pay_display_qr_code"
                );
              var c = t.createLightboxFrame({
                  type: Q.c.WECHAT_PAY_INNER,
                  options: {
                    qrCodeImageDataUrl:
                      i.wechat_pay_display_qr_code.image_data_url,
                    qrCodeUrl: i.wechat_pay_display_qr_code.data,
                    locale: o,
                  },
                }),
                s = null;
              return new ce.a(function (e, i) {
                c._on("load", function () {
                  c.show(), c.fadeInBackdrop();
                }),
                  c._once("request-close", function () {
                    Bo(c).then(function () {
                      s && clearTimeout(s), e({ paymentIntent: n });
                    });
                  }),
                  c._on("complete", function (t) {
                    Bo(c).then(function () {
                      s && clearTimeout(s), e(t);
                    });
                  }),
                  (s = setTimeout(function n() {
                    jo(a, r, t, o).then(function (t) {
                      var r = So(t);
                      if (null !== r)
                        switch (r.status) {
                          case "requires_action":
                            return void (s = setTimeout(n, 2e3));
                          default:
                            c.destroy(!0).then(function () {
                              "payment_intent" === r.object
                                ? e({ paymentIntent: r })
                                : e({ setupIntent: r });
                            });
                        }
                    });
                  }, 5e3));
              });
            })({
              controller: e,
              locale: r,
              intent: t,
              intentSecret: i,
              intentType: Q.g.PAYMENT_INTENT,
            });
          default:
            return ce.a.resolve({ paymentIntent: t });
        }
      },
      zo = function (e, t, n, r, a) {
        return Go(e, t, n, r, a).then(function (e) {
          if (e.setupIntent)
            throw new Error("Got unexpected SetupIntent response");
          return e;
        });
      },
      Wo = function (e, t, n, r) {
        return function (a) {
          var o = Yo(a);
          switch (o.type) {
            case "error":
              var i = o.error,
                c = i.payment_intent;
              return n &&
                c &&
                "payment_intent_unexpected_state" === i.code &&
                ("succeeded" === c.status || "requires_capture" === c.status)
                ? ce.a.resolve({ paymentIntent: c })
                : ce.a.resolve(la(a));
            case "object":
              var s = o.object;
              return zo(e, s, t, o.locale, r);
            default:
              return Object(l.a)(o);
          }
        };
      },
      Ko = function (e, t, n, a) {
        var o = Z(
            $({ clientSecret: S(D), element: S(G), confirmParams: G }),
            n,
            a
          ),
          i = o.value,
          c = i.element,
          l = i.confirmParams,
          p = i.clientSecret;
        o.warnings.forEach(function (t) {
          return e.warn(t);
        });
        var d,
          f = Z(
            $({
              return_url: D,
              payment_method_data: S(G),
              payment_method_options: S(G),
              setup_future_usage:
                ((d = "".concat(
                  a,
                  ": do not pass setup_future_usage at confirm time. Instead, pass setup_future_usage when the PaymentIntent is created."
                )),
                function (e, t) {
                  return void 0 === e ? w(void 0) : O(new u.a(d));
                }),
            }),
            l,
            a,
            { path: ["confirmParams"] }
          ).value,
          m = Object(r.a)(Object(r.a)({}, l), f);
        if (p && c)
          throw new u.a(
            "".concat(
              a,
              ": Expected either `element` or `clientSecret`, but not both."
            )
          );
        if (c) {
          var _ = Z(oa, c, a).value;
          if ("payment" !== _._componentName)
            throw new u.a(
              "".concat(a, ' only works with the "payment" element')
            );
          var h = m.payment_method_data,
            y = m.payment_method_options,
            b = s(m, ["payment_method_data", "payment_method_options"]);
          return {
            request: {
              mode: {
                tag: "payment-element",
                frameId: _._implementation._frame.id,
                data: h || {},
                options: y || {},
              },
              otherParams: b,
              expectedType: null,
              mids: t,
              options: { handleActions: !0 },
            },
            returnUrl: f.return_url,
          };
        }
        throw p
          ? new u.a(
              "".concat(
                a,
                ": With a `clientSecret` is not supported yet. Please use the payment element."
              )
            )
          : new u.a(
              "".concat(
                a,
                ": Expected either `element` or `clientSecret`, but got neither."
              )
            );
      },
      Vo = function (e, t) {
        return function (n, a, o, i, c) {
          var s = mo(o, e),
            u = yo(t, e, i, s),
            l = ho(e, c),
            p = "none" === u.mode.tag,
            d = n.action.confirmPaymentIntent(
              Object(r.a)(
                Object(r.a)({}, u),
                {},
                { expectedType: t, options: l, mids: a }
              )
            );
          return l.handleActions ? d.then(Wo(n, t, p, !1)) : d.then(la);
        };
      },
      Jo = Vo("confirmAcssDebitPayment", ca.acss_debit),
      $o = Vo("confirmAfterpayClearpayPayment", ca.afterpay_clearpay),
      Xo = Vo("confirmAuBecsDebitPayment", ca.au_becs_debit),
      Zo = Vo("confirmBacsDebitPayment", ca.bacs_debit),
      Qo = Vo("confirmBancontactPayment", ca.bancontact),
      ei = Vo("confirmBoletoPayment", ca.boleto),
      ti = Vo("confirmCardPayment", ca.card),
      ni = Vo("confirmEpsPayment", ca.eps),
      ri = Vo("confirmFpxPayment", ca.fpx),
      ai = Vo("confirmGiropayPayment", ca.giropay),
      oi = Vo("confirmGrabPayPayment", ca.grabpay),
      ii = Vo("confirmIdealPayment", ca.ideal),
      ci = Vo("confirmKlarnaPayment", ca.klarna),
      si = Vo("confirmKonbiniPayment", ca.konbini),
      ui = Vo("confirmOxxoPayment", ca.oxxo),
      li = Vo("confirmAlipayPayment", ca.alipay),
      pi = Vo("confirmP24Payment", ca.p24),
      di = Vo("confirmPayPalPayment", ca.paypal),
      fi = Vo("confirmSepaDebitPayment", ca.sepa_debit),
      mi = Vo("confirmSofortPayment", ca.sofort),
      _i = Vo("confirmIdBankTransferPayment", ca.id_bank_transfer),
      hi = Vo("confirmUpiPayment", ca.upi),
      yi = Vo("confirmUsBankAccountPayment", ca.us_bank_account),
      bi = function (e, t, n, a, o) {
        if (o && !0 === o.handleActions)
          throw new u.a("Expected option `handleActions` to be `false`.");
        var i = Object(r.a)(
          Object(r.a)({}, a),
          {},
          {
            payment_method: Object(r.a)({}, (a && a.payment_method) || {}),
            payment_method_options: Object(r.a)(
              Object(r.a)({}, (a && a.payment_method_options) || {}),
              {},
              {
                wechat_pay: Object(r.a)(
                  Object(r.a)(
                    {},
                    (a &&
                      a.payment_method_options &&
                      a.payment_method_options.wechat_pay) ||
                      {}
                  ),
                  {},
                  { client: "web" }
                ),
              }
            ),
          }
        );
        return Vo("confirmWechatPayPayment", ca.wechat_pay)(e, t, n, i, o);
      },
      vi = function (e, t, n, a, o) {
        if (
          !a ||
          !a.payment_method_options ||
          !a.payment_method_options.wechat_pay ||
          ("web" !== a.payment_method_options.wechat_pay.client &&
            "mobile_web" !== a.payment_method_options.wechat_pay.client)
        )
          throw new u.a(
            "Expected client value `web` or `mobile_web` in payment_method_options."
          );
        var i = Object(r.a)(
          Object(r.a)({}, a),
          {},
          {
            payment_method: Object(r.a)({}, (a && a.payment_method) || {}),
            payment_method_options: Object(r.a)(
              Object(r.a)({}, (a && a.payment_method_options) || {}),
              {},
              {
                wechat_pay: Object(r.a)(
                  {},
                  (a &&
                    a.payment_method_options &&
                    a.payment_method_options.wechat_pay) ||
                    {}
                ),
              }
            ),
          }
        );
        return Vo("confirmWechatPayPayment", ca.wechat_pay)(e, t, n, i, o);
      },
      gi = Vo("confirmNetbankingPayment", ca.netbanking),
      Ei = function (e, t, n, a) {
        var o = mo(n, "updatePaymentIntent"),
          i = (function (e) {
            if (
              !e ||
              !e.payment_method ||
              !e.payment_method.type ||
              "string" != typeof e.payment_method.type
            )
              return null;
            var t = e.payment_method.type;
            return ca[t] || null;
          })(a),
          c = yo(i, "updatePaymentIntent", a, o);
        return e.action
          .updatePaymentIntent(
            Object(r.a)(
              Object(r.a)({}, c),
              {},
              { expectedType: i, mids: t, options: null }
            )
          )
          .then(la);
      },
      wi = function (e, t, n) {
        var r = mo(t, "verifyMicrodepositsForPayment"),
          a = Z(G, n, "stripe.verifyMicrodepositsForPayment");
        return e.action
          .verifyMicrodepositsForPayment({ intentSecret: r, data: a.value })
          .then(la);
      },
      Oi = function (e, t) {
        var n = mo(e, "handleCardAction");
        return t.action
          .retrievePaymentIntent({ intentSecret: n, hosted: !1 })
          .then(function (e) {
            var n = Yo(e);
            switch (n.type) {
              case "error":
                return ce.a.resolve(la(e));
              case "object":
                var r = n.object;
                if (fa(r.status)) {
                  if ("manual" !== r.confirmation_method)
                    throw new u.a(
                      "handleCardAction: The PaymentIntent supplied does not require manual server-side confirmation. Please use confirmCardPayment instead to complete the payment."
                    );
                  return zo(t, r, ca.card, n.locale, !1);
                }
                throw new u.a(
                  "handleCardAction: The PaymentIntent supplied is not in the requires_action state."
                );
              default:
                return Object(l.a)(n);
            }
          });
      },
      ki = function (e, t) {
        if ("object" == typeof e && null !== e && void 0 !== e.handleActions)
          throw new u.a(
            "stripe."
              .concat(
                t,
                " does not support a handleActions option. For more information, see "
              )
              .concat(fo(t))
          );
      },
      ji = function (e) {
        var t = e.mode;
        return !("paymentMethod-from-data" === t.tag && t.data.acss_debit);
      },
      Pi = function (e) {
        return null !== e && "object" == typeof e && !0 === e.skipMandate;
      },
      Si = function (e) {
        var t = e.controller,
          n = e.intentSecret,
          r = e.mode,
          a = e.confirmIntentData;
        return t.action
          .createAcssDebitSession({
            intentSecret: n,
            confirmIntentData: a,
            mode: r,
          })
          .then(function (e) {
            if ("error" === e.type) return { type: "error", error: e.error };
            var n = Do(t, {
              url: e.object.url,
              size: "400x600",
              locale: e.locale,
              frameTitle: "acss.dialog_frame_title",
              useLightboxHostedCloseButton: !1,
            });
            return new ce.a(function (e) {
              n._on("request-close", function () {
                Bo(n)
                  .then(function () {
                    return t.action.localizeError(vo);
                  })
                  .then(function (t) {
                    e({ type: "error", error: t });
                  });
              }),
                n._on("session-complete", function (t) {
                  var r = t.paymentMethod;
                  Bo(n).then(function () {
                    e({ type: "success", paymentMethod: r });
                  });
                });
            });
          });
      },
      Ti = function (e, t, n, a, o) {
        var i = "confirmAcssDebitPayment",
          c = ca.acss_debit,
          s = mo(n, i),
          u = yo(c, i, a, s);
        return (
          ki(o, i),
          Pi(o) || !ji(u)
            ? e.action
                .confirmPaymentIntent(
                  Object(r.a)(
                    Object(r.a)({}, u),
                    {},
                    { expectedType: c, options: { handleActions: !1 }, mids: t }
                  )
                )
                .then(la)
            : Si({
                controller: e,
                intentSecret: s,
                mode: "payment",
                confirmIntentData: u,
              }).then(function (n) {
                switch (n.type) {
                  case "error":
                    return { error: n.error };
                  case "success":
                    return e.action
                      .confirmPaymentIntent({
                        mode: {
                          tag: "paymentMethod",
                          paymentMethod: n.paymentMethod,
                          options: u.mode.options || {},
                          intentSecret: s,
                        },
                        otherParams: u.otherParams,
                        expectedType: c,
                        options: { handleActions: !1 },
                        mids: t,
                      })
                      .then(la);
                  default:
                    return Object(l.a)(n.type);
                }
              })
        );
      },
      Ai = function (e, t, n, a, o) {
        var i = "confirmAcssDebitSetup",
          c = ca.acss_debit,
          s = _o(n, i),
          u = yo(c, i, a, s);
        return (
          ki(o, i),
          Pi(o) || !ji(u)
            ? e.action
                .confirmSetupIntent(
                  Object(r.a)(
                    Object(r.a)({}, u),
                    {},
                    { expectedType: c, options: { handleActions: !1 }, mids: t }
                  )
                )
                .then(pa)
            : Si({
                controller: e,
                intentSecret: s,
                mode: "setup",
                confirmIntentData: u,
              }).then(function (n) {
                switch (n.type) {
                  case "error":
                    return { error: n.error };
                  case "success":
                    return e.action
                      .confirmSetupIntent({
                        mode: {
                          tag: "paymentMethod",
                          paymentMethod: n.paymentMethod,
                          options: u.mode.options || {},
                          intentSecret: s,
                        },
                        otherParams: u.otherParams,
                        expectedType: c,
                        options: { handleActions: !1 },
                        mids: t,
                      })
                      .then(pa);
                  default:
                    return Object(l.a)(n.type);
                }
              })
        );
      },
      Ii = { type: "validation_error", code: "errors.code.unexpected" },
      Ci = {
        type: "validation_error",
        code: "errors.code.incomplete_payment_details",
      },
      Ni = function (e, t, n, a, o) {
        var i = "confirmInstantDebitsPilotPayment",
          c = mo(n, i),
          s = ho(i, o),
          u = yo(null, i, a, c),
          l = e.createLightboxFrame({
            type: Q.c.INSTANT_DEBITS_APP,
            options: {
              intentId: c.id,
              clientSecret: c.clientSecret,
              apiKey: e._apiKey,
              returnOnConfirm: !1 === s.handleActions,
            },
          });
        return (
          l.show(),
          l.fadeInBackdrop(),
          new ce.a(function (n) {
            var a = function (e) {
              l.fadeOutBackdrop().then(function () {
                n(e);
              });
            };
            l._once("cancel", function () {
              l.fadeOutBackdrop(),
                e.action.localizeError(Ci).then(function (e) {
                  a({ error: e });
                });
            }),
              l._on("instant-debits-fetch-payment-intent", function () {
                e.action
                  .retrievePaymentIntent({ intentSecret: c, hosted: !1 })
                  .then(function (t) {
                    if (t.object) {
                      var r = t.object;
                      l.send({
                        action: "stripe-instant-debits-received-payment-intent",
                        payload: { paymentIntent: r },
                      }),
                        !1 === s.handleActions &&
                          setTimeout(function () {
                            l.fadeOutBackdrop(), a(la(t));
                          }, 2e3);
                    } else {
                      var o = t.error;
                      e.action.localizeError(o).then(function (e) {
                        n({ error: e });
                      });
                    }
                  });
              }),
              l._on("instant-debits-attempt-payment", function (n) {
                e.action
                  .confirmPaymentIntent(
                    Object(r.a)(
                      Object(r.a)({}, u),
                      {},
                      {
                        mode: { tag: "none", intentSecret: c },
                        expectedType: null,
                        options: s,
                        mids: t,
                      }
                    )
                  )
                  .then(function (t) {
                    t.object
                      ? (l.send({
                          action:
                            "stripe-instant-debits-successful-payment-intent",
                          payload: { paymentIntent: t.object },
                        }),
                        setTimeout(function () {
                          a(la(t));
                        }, 2e3))
                      : e.action.localizeError(t.error).then(function (e) {
                          a({ error: e });
                        });
                  });
              }),
              l._on("instant-debits-flow-error", function (t) {
                e.action.localizeError(Ii).then(function (e) {
                  a({ error: e });
                });
              });
          })
        );
      },
      Ri = function (e, t) {
        if (null == e) return w(null);
        var n = e.type,
          r = s(e, ["type"]),
          a = B(D, function () {
            return null;
          })(n, P(t, "type"));
        return "error" === a.type ? a : w({ type: a.value, data: r });
      },
      Mi = function (e, t, n, r) {
        if (null === e) {
          if (null === t) {
            var a = r ? "source_data" : "payment_method_data";
            throw new u.a(
              ""
                .concat(
                  n,
                  ": you must additionally specify the type of payment method to create within "
                )
                .concat(a, ".")
            );
          }
          return t;
        }
        if (null === t) return e;
        if (t !== e)
          throw new u.a(
            ""
              .concat(n, ": you specified `type: ")
              .concat(t, "`, but ")
              .concat(n, " will create a ")
              .concat(e, " payment method.")
          );
        return e;
      },
      Li = function (e) {
        return function (t, n) {
          if ("object" == typeof t && null !== t) {
            var a = t.source,
              o = t.source_data,
              i = t.payment_method,
              c = t.payment_method_data,
              u = s(t, [
                "source",
                "source_data",
                "payment_method",
                "payment_method_data",
              ]);
            if (null != a && "string" != typeof a)
              return k("string", typeof a, P(n, "source"));
            if (null != i && "string" != typeof i)
              return k("string", typeof i, P(n, "payment_method"));
            if (null != o && "object" != typeof o)
              return k("object", typeof o, P(n, "source_data"));
            if (null != c && "object" != typeof c)
              return k("object", typeof c, P(n, "payment_method_data"));
            var l = Ri(o, P(n, "source_data"));
            if ("error" === l.type) return l;
            var p = l.value,
              d = Ri(c, P(n, "payment_method_data"));
            if ("error" === d.type) return d;
            var f = d.value;
            return w({
              sourceData: p,
              source: null == a ? null : a,
              paymentMethodData: f,
              paymentMethod: null == i ? null : i,
              otherParams: Object(r.a)(Object(r.a)({}, e), u),
            });
          }
          return k("object", null === t ? "null" : typeof t, n);
        };
      },
      xi = function (e) {
        return function (t, n) {
          if (void 0 === t)
            return w({
              sourceData: null,
              paymentMethodData: null,
              source: null,
              paymentMethod: null,
              otherParams: {},
            });
          if ("object" != typeof t) return k("object", typeof t, n);
          if (null === t) return k("object", "null", n);
          if (e) {
            if (!t.payment_intent)
              return w({
                sourceData: null,
                paymentMethodData: null,
                source: null,
                paymentMethod: null,
                otherParams: t,
              });
            var r = t.payment_intent,
              a = s(t, ["payment_intent"]);
            return Li(a)(r, P(n, "payment_intent"));
          }
          return t.payment_intent
            ? O(
                new u.a(
                  "The payment_intent parameter has been removed. To fix, move everything nested under the payment_intent parameter to the top-level object."
                )
              )
            : Li({})(t, n);
        };
      },
      Di = function (e, t, n, a, o, i, c) {
        var s = X(oa, o, a);
        if ("error" === s.type) return null;
        var l = s.value,
          p = Z(xi(t), i, a).value,
          d = p.sourceData,
          f = p.source,
          m = p.paymentMethodData,
          _ = p.paymentMethod,
          h = p.otherParams;
        if (!e && d)
          throw new u.a(
            "".concat(a, ": Expected payment_method_data, not source_data.")
          );
        if (null != f)
          throw new u.a(
            "When calling ".concat(
              a,
              " on an Element, you can't pass in a pre-existing source ID, as a source will be created using the Element."
            )
          );
        if (null != _)
          throw new u.a(
            "When calling ".concat(
              a,
              " on an Element, you can't pass in a pre-existing PaymentMethod ID, as a PaymentMethod will be created using the Element."
            )
          );
        var y = l._componentName,
          b = l._implementation._frame.id,
          v = d || m || { type: null, data: {} },
          g = v.type,
          E = v.data,
          w = (function (e, t) {
            return null != t ? t : ua(e) ? null : sa[e] || null;
          })(y, g),
          O = e && !m,
          k = { elementName: y, frameId: b, type: Mi(n, w, a, O), data: E };
        return O
          ? {
              mode: Object(r.a)(
                { tag: "source-from-element", intentSecret: c },
                k
              ),
              otherParams: h,
            }
          : {
              mode: Object(r.a)(
                {
                  tag: "paymentMethod-from-element",
                  options: null,
                  intentSecret: c,
                },
                k
              ),
              otherParams: h,
            };
      },
      Bi = function (e, t, n, r, a) {
        return function (o, i) {
          var c = Di(e, t, n, r, o, i, a);
          if (c) return c;
          var s = (function (e, t, n, r, a, o, i) {
            var c = Z(xi(t), a, r).value,
              s = c.sourceData,
              l = c.source,
              p = c.paymentMethodData,
              d = c.paymentMethod,
              f = c.otherParams;
            if (!e && s)
              throw new u.a(
                "".concat(
                  r,
                  ": Expected payment_method, source, or payment_method_data, not source_data."
                )
              );
            if (null !== l && null !== s)
              throw new u.a(
                "".concat(
                  r,
                  ": Expected either source or source_data, but not both."
                )
              );
            if (null !== d && null !== p)
              throw new u.a(
                "".concat(
                  r,
                  ": Expected either payment_method or payment_method_data, but not both."
                )
              );
            if (null !== d && null !== l)
              throw new u.a(
                "".concat(
                  r,
                  ": Expected either payment_method or source, but not both."
                )
              );
            if (s || p) {
              var m = s || p || {},
                _ = m.type,
                h = m.data,
                y = e && !p,
                b = Mi(n, _, r, y);
              return y
                ? {
                    mode: {
                      tag: "source-from-data",
                      intentSecret: i,
                      type: b,
                      data: h,
                    },
                    otherParams: f,
                  }
                : {
                    mode: {
                      tag: "paymentMethod-from-data",
                      type: b,
                      data: h,
                      intentSecret: i,
                      options: null,
                    },
                    otherParams: f,
                  };
            }
            return null !== l
              ? {
                  mode: { tag: "source", intentSecret: i, source: l },
                  otherParams: f,
                }
              : null !== d
              ? {
                  mode: {
                    tag: "paymentMethod",
                    paymentMethod: d,
                    intentSecret: i,
                    options: null,
                  },
                  otherParams: f,
                }
              : { mode: { tag: "none", intentSecret: i }, otherParams: f };
          })(e, t, n, r, o, 0, a);
          if (s) return s;
          throw new u.a(
            "Expected: stripe."
              .concat(r, "(intentSecret, element[, data]) or stripe.")
              .concat(
                r,
                "(intentSecret[, data]). Please see the docs for more usage examples https://stripe.com/docs/payments/dynamic-authentication"
              )
          );
        };
      },
      qi = function (e, t, n, a, o, i) {
        var c = Z(ba, a, "stripe.confirmPaymentIntent intent secret").value,
          s = Bi(e, !1, null, "confirmPaymentIntent", c)(o, i);
        return t.action
          .confirmPaymentIntent(
            Object(r.a)(
              Object(r.a)({}, s),
              {},
              { expectedType: null, options: { handleActions: !1 }, mids: n }
            )
          )
          .then(la);
      },
      Fi = function (e, t, n, a, o, i, c) {
        var s = Z(ba, o, "stripe.handleCardPayment intent secret").value,
          u = ca.card,
          l = Bi(e, a, u, "handleCardPayment", s)(i, c),
          p = !i && !c;
        return t.action
          .confirmPaymentIntent(
            Object(r.a)(
              Object(r.a)({}, l),
              {},
              { expectedType: u, options: { handleActions: !0 }, mids: n }
            )
          )
          .then(Wo(t, u, p, !1));
      },
      Ui = function (e, t, n, a, o, i) {
        var c = Z(ba, a, "stripe.handleSepaDebitPayment intent secret").value,
          s = ca.sepa_debit,
          u = Bi(!1, n, s, "handleSepaDebitPayment", c)(o, i),
          l = !o && !i;
        return e.action
          .confirmPaymentIntent(
            Object(r.a)(
              Object(r.a)({}, u),
              {},
              { expectedType: s, options: { handleActions: !0 }, mids: t }
            )
          )
          .then(Wo(e, s, l, !1));
      },
      Hi = function (e, t, n, a, o, i, c) {
        var s = Z(ba, o, "stripe.handleIdealPayment intent secret").value,
          u = ca.ideal,
          l = Bi(e, a, u, "handleIdealPayment", s)(i, c),
          p = !i && !c;
        return t.action
          .confirmPaymentIntent(
            Object(r.a)(
              Object(r.a)({}, l),
              {},
              { expectedType: u, options: { handleActions: !0 }, mids: n }
            )
          )
          .then(Wo(t, u, p, !1));
      },
      Yi = function (e, t, n, a, o, i) {
        var c = Z(ba, a, "stripe.handleFpxPayment intent secret").value,
          s = ca.fpx,
          u = Bi(!1, n, s, "handleFpxPayment", c)(o, i),
          l = !o && !i;
        return e.action
          .confirmPaymentIntent(
            Object(r.a)(
              Object(r.a)({}, u),
              {},
              { expectedType: s, options: { handleActions: !0 }, mids: t }
            )
          )
          .then(Wo(e, s, l, !1));
      },
      Gi = function (e) {
        switch (e.type) {
          case "object":
            return { returnIntent: e.object };
          case "error":
            return { error: e.error };
          default:
            return Object(l.a)(e);
        }
      },
      zi = function (e, t, n) {
        return e.action
          .confirmReturnIntent({ returnIntentId: t, data: n })
          .then(Gi);
      },
      Wi = function (e, t, n, r, a) {
        var o = Oo(ma(t), n, e),
          i = da(t);
        if (!o) return ce.a.resolve({ setupIntent: t });
        switch (o.type) {
          case "3ds1-modal":
            return To(o, i, Q.g.SETUP_INTENT, e, r);
          case "3ds2-fingerprint":
          case "3ds2-challenge":
            return xo(o, {
              intentSecret: i,
              intentType: Q.g.SETUP_INTENT,
              controller: e,
              locale: r,
              hosted: a,
            });
          case "redirect":
            return (function (e, t, n) {
              return lo(t).then(function (t) {
                return po(n, "next_action redirect", t), pa(t, e);
              });
            })(t, o.redirectUrl, e);
          case "us_bank_account_link":
            return Ho({
              controller: e,
              intentSecret: i,
              intentType: Q.g.SETUP_INTENT,
              locale: r,
            });
          default:
            return ce.a.resolve({ setupIntent: t });
        }
      },
      Ki = function (e, t, n, r, a) {
        return Wi(e, t, n, r, a).then(function (e) {
          if (e.paymentIntent)
            throw new Error("Got unexpected PaymentIntent response");
          return e;
        });
      },
      Vi = function (e, t, n, r) {
        return function (a) {
          switch (a.type) {
            case "error":
              var o = a.error,
                i = o.setup_intent;
              return n && i && "succeeded" === i.status
                ? ce.a.resolve({ setupIntent: i })
                : ce.a.resolve({ error: o });
            case "object":
              var c = a.object;
              return Ki(e, c, t, a.locale, r);
            default:
              return Object(l.a)(a);
          }
        };
      },
      Ji = function (e, t) {
        return function (n, a, o, i, c) {
          var s = _o(o, e),
            u = yo(t, e, i, s),
            l = ho(e, c),
            p = "none" === u.mode.tag,
            d = n.action.confirmSetupIntent(
              Object(r.a)(
                Object(r.a)({}, u),
                {},
                { expectedType: t, options: l, mids: a }
              )
            );
          return l.handleActions ? d.then(Vi(n, t, p, !1)) : d.then(pa);
        };
      },
      $i = Ji("confirmAcssDebitSetup", ca.acss_debit),
      Xi = Ji("confirmCardSetup", ca.card),
      Zi = Ji("confirmSepaDebitSetup", ca.sepa_debit),
      Qi = Ji("confirmAuBecsDebitSetup", ca.au_becs_debit),
      ec = Ji("confirmBacsDebitSetup", ca.bacs_debit),
      tc = Ji("confirmIdealSetup", ca.ideal),
      nc = Ji("confirmAlipaySetup", ca.alipay),
      rc = Ji("confirmSofortSetup", ca.sofort),
      ac = Ji("confirmBancontactSetup", ca.bancontact),
      oc = Ji("confirmIdBankTransferSetup", ca.id_bank_transfer),
      ic = Ji("confirmPayPalSetup", ca.paypal),
      cc = Ji("confirmUsBankAccountSetup", ca.us_bank_account),
      sc = function (e, t, n) {
        var r = _o(t, "verifyMicrodepositsForSetup"),
          a = Z(G, n, "stripe.verifyMicrodepositsForSetup");
        return e.action
          .verifyMicrodepositsForSetup({ intentSecret: r, data: a.value })
          .then(pa);
      },
      uc = function (e, t, n, a, o) {
        var i = Z(va, n, "stripe.handleCardSetup intent secret").value,
          c = ca.card,
          s = Bi(!1, !1, c, "handleCardSetup", i)(a, o),
          u = !a && !o;
        return e.action
          .confirmSetupIntent(
            Object(r.a)(
              Object(r.a)({}, s),
              {},
              { expectedType: c, options: { handleActions: !0 }, mids: t }
            )
          )
          .then(Vi(e, c, u, !1));
      },
      lc = function (e, t, n, a, o) {
        var i = Z(va, n, "stripe.handleSepaDebitSetup intent secret").value,
          c = ca.sepa_debit,
          s = Bi(!1, !1, c, "handleSepaDebitSetup", i)(a, o),
          u = !a && !o;
        return e.action
          .confirmSetupIntent(
            Object(r.a)(
              Object(r.a)({}, s),
              {},
              { expectedType: c, options: { handleActions: !0 }, mids: t }
            )
          )
          .then(Vi(e, c, u, !1));
      },
      pc = function (e, t, n, a, o) {
        var i = Z(va, n, "stripe.confirmSetupIntent intent secret").value,
          c = Bi(!1, !1, null, "confirmSetupIntent", i)(a, o);
        return e.action
          .confirmSetupIntent(
            Object(r.a)(
              Object(r.a)({}, c),
              {},
              {
                otherParams: Object(r.a)({}, c.otherParams),
                expectedType: null,
                options: { handleActions: !1 },
                mids: t,
              }
            )
          )
          .then(pa);
      },
      dc = function (e, t) {
        var n = (function (e) {
            if ("string" == typeof e) {
              var t = e
                .trim()
                .match(/^((vi|vs)_[0-9a-zA-Z]+)_secret_([0-9a-zA-Z]+)$/);
              if (!t)
                throw new u.a(
                  "stripe.verifyIdentity: Could not parse client secret."
                );
              return { identityClientSecret: t[0], id: t[1], token: t[3] };
            }
            throw new u.a(
              "stripe.verifyIdentity: Could not parse client secret."
            );
          })(e),
          r = n.id;
        return (function (e) {
          var t = e.controller,
            n = e.url,
            r = (e.id, e.locale),
            a = Do(t, {
              url: n,
              size: "1100x800",
              frameTitle: "identity.verification_frame_title",
              locale: void 0 === r ? "en-US" : r,
              useLightboxHostedCloseButton: !0,
              allowCamera: !0,
              appType: "identity",
            });
          return new ce.a(function (e) {
            var t = { type: "user_action", code: "session_cancelled" };
            a._on("identity-frame-close", function () {
              Bo(a).then(function () {
                e({ error: t });
              });
            }),
              a._on("identity-frame-error", function (e) {
                var n = e.type,
                  r = e.code;
                t = { type: n, code: r };
              }),
              a._on("identity-frame-session-complete", function () {
                t = null;
              }),
              a._on("request-close", function (n) {
                Bo(a).then(function () {
                  e({ error: t });
                });
              });
          });
        })({
          controller: t,
          url: (function (e) {
            return "".concat(Q.f, "start/").concat(e);
          })(n.token),
          id: r,
        });
      },
      fc = function (e, t) {
        if ("string" != typeof e)
          return j("an Issuing card ID of the form ic_xxx", e, t);
        var n,
          r = (n = e.trim().match(/ic_[a-zA-Z0-9_]+$/)) ? n[0] : null;
        return null === r
          ? j("an Issuing card ID of the form ic_xxx", e, t)
          : w(r, []);
      },
      mc = function (e, t) {
        return Z(fc, e, "stripe.".concat(t, " cardId")).value;
      },
      _c = function (e, t) {
        if ("string" != typeof e)
          return j("an ephemeral key secret of the form ek_xxx", e, t);
        var n,
          r = (n = e.trim().match(/ek_[a-zA-Z0-9_]+$/)) ? n[0] : null;
        return null === r
          ? j("an ephemeral key secret of the form ek_xxx", e, t)
          : w(r, []);
      },
      hc = function (e, t) {
        return Z(_c, e, "stripe.".concat(t, " ephemeral key secret")).value;
      },
      yc = function (e, t) {
        if ("string" != typeof e)
          return j("an ephemeral key nonce of the form ephkn_xxx", e, t);
        var n,
          r = (n = e.trim().match(/ephkn_[a-zA-Z0-9_]+$/)) ? n[0] : null;
        return null === r
          ? j("an ephemeral key nonce of the form ephkn_xxx", e, t)
          : w(r, []);
      },
      bc = function (e) {
        var t;
        if ("object" == typeof e && e && e.ephemeralKeySecret && e.nonce)
          return {
            ephemeralKeySecret: hc(e.ephemeralKeySecret, "retrieveIssuingCard"),
            publicNonce:
              ((t = e.nonce),
              Z(
                yc,
                t,
                "stripe.".concat("retrieveIssuingCard", " ephemeral key nonce")
              ).value),
          };
        throw new u.a(
          "When retrieving an Issuing card, you must specify an ephemeral key secret and an ephemeral key nonce in the options argument of stripe.retrieveIssuingCard."
        );
      },
      vc = function (e, t) {
        var n = (function (e) {
          if ("object" == typeof e && e && e.issuingCard)
            return {
              issuingCard: mc(e.issuingCard, "createEphemeralKeyNonce"),
            };
          throw new u.a(
            "When creating an ephemeral key nonce, you must specify an Issuing card ID in the options argument of stripe.createEphemeralKeyNonce."
          );
        })(e);
        return t.action
          .createEphemeralKeyNonce({ cardId: n.issuingCard })
          .then(Gr);
      },
      gc = [qt.checkout_beta_2, qt.checkout_beta_3, qt.checkout_beta_4],
      Ec = [
        qt.checkout_beta_2,
        qt.checkout_beta_3,
        qt.checkout_beta_4,
        qt.checkout_beta_locales,
        qt.checkout_beta_testcards,
      ],
      wc = {
        bg: "bg",
        cs: "cs",
        da: "da",
        de: "de",
        el: "el",
        en: "en",
        "en-GB": "en-GB",
        es: "es",
        "es-419": "es-419",
        et: "et",
        fi: "fi",
        fr: "fr",
        "fr-CA": "fr-CA",
        hu: "hu",
        id: "id",
        it: "it",
        ja: "ja",
        lt: "lt",
        lv: "lv",
        ms: "ms",
        mt: "mt",
        nb: "nb",
        nl: "nl",
        pl: "pl",
        pt: "pt",
        "pt-BR": "pt-BR",
        ro: "ro",
        ru: "ru",
        sk: "sk",
        sl: "sl",
        sv: "sv",
        th: "th",
        tr: "tr",
        zh: "zh",
        "zh-HK": "zh-HK",
        "zh-TW": "zh-TW",
      },
      Oc = { hr: "hr", ko: "ko", "pt-PT": "pt-PT", vi: "vi" },
      kc = Object.keys(wc),
      jc = Object.keys(Oc),
      Pc = {
        sku: S(D),
        plan: S(D),
        clientReferenceId: S(D),
        locale: S(N.apply(void 0, ["auto"].concat(Object(i.a)(kc)))),
        customerEmail: S(D),
        billingAddressCollection: S(N("required", "auto")),
        submitType: S(N("auto", "pay", "book", "donate")),
        allowIncompleteSubscriptions: S(q),
        shippingAddressCollection: S(J({ allowedCountries: z(D) })),
      },
      Sc = /cs_(test|live)_.+/,
      Tc = function (e, t) {
        var n = J(
            Object(r.a)(
              Object(r.a)({}, Pc),
              {},
              {
                items: S(
                  T(
                    z(J({ type: N("plan"), quantity: U(0), id: D })),
                    z(J({ type: N("sku"), quantity: U(0), id: D }))
                  )
                ),
                successUrl: D,
                cancelUrl: D,
              }
            )
          ),
          a = Z(n, t, "stripe.redirectToCheckout").value,
          o = a.sku,
          i = a.plan,
          c = a.items,
          l = s(a, ["sku", "plan", "items"]),
          p = (function (e, t, n) {
            if ((e && t) || ((e || t) && n))
              throw new u.a(
                "stripe.redirectToCheckout: Expected only one of sku, plan, or items."
              );
            if ("string" == typeof e) return [{ sku: e, quantity: 1 }];
            if ("string" == typeof t) return [{ plan: t, quantity: 1 }];
            if (n)
              return n.map(function (e) {
                return "sku" === e.type
                  ? { sku: e.id, quantity: e.quantity }
                  : { plan: e.id, quantity: e.quantity };
              });
            throw new u.a(
              "stripe.redirectToCheckout: You must provide either sku, plan, or items."
            );
          })(o, i, c);
        return Object(r.a)({ tag: "no-session", items: p }, l);
      },
      Ac = function (e, t, n) {
        var a = J(
            Object(r.a)(
              Object(r.a)({}, Pc),
              {},
              {
                sessionId: S(D),
                successUrl: S(D),
                cancelUrl: S(D),
                mode: S(N("subscription", "payment")),
                items: S(
                  T(
                    z(J({ quantity: U(0), plan: D })),
                    z(J({ quantity: U(0), sku: D }))
                  )
                ),
                lineItems: S(z(J({ quantity: U(0), price: D }))),
              },
              -1 !== e.indexOf("checkout_beta_locales")
                ? {
                    locale: S(
                      N.apply(
                        void 0,
                        ["auto"].concat(Object(i.a)(kc), Object(i.a)(jc))
                      )
                    ),
                  }
                : {}
            )
          ),
          o = Z(a, t, "stripe.redirectToCheckout").value;
        if (o.sessionId) {
          var c = o.sessionId;
          if (Object.keys(o).length > 1)
            throw new u.a(
              "stripe.redirectToCheckout: Do not provide other parameters when providing sessionId. Specify all parameters on your server when creating the CheckoutSession."
            );
          if (!/^cs_/.test(c))
            throw new u.a(
              "stripe.redirectToCheckout: Invalid value for sessionId. You specified '".concat(
                c,
                "'."
              )
            );
          if ("live" === n && /^cs_test_/.test(c))
            throw new u.a(
              "stripe.redirectToCheckout: the provided sessionId is for a test mode Checkout Session, whereas Stripe.js was initialized with a live mode publishable key."
            );
          if ("test" === n && /^cs_live_/.test(c))
            throw new u.a(
              "stripe.redirectToCheckout: the provided sessionId is for a live mode Checkout Session, whereas Stripe.js was initialized with a test mode publishable key."
            );
          return { tag: "session", sessionId: c };
        }
        o.sessionId, o.sku, o.plan;
        var l = o.items,
          p = o.lineItems,
          d = o.successUrl,
          f = o.cancelUrl,
          m = o.mode,
          _ = s(o, [
            "sessionId",
            "sku",
            "plan",
            "items",
            "lineItems",
            "successUrl",
            "cancelUrl",
            "mode",
          ]);
        if (!p && !l)
          throw new u.a(
            "stripe.redirectToCheckout: You must provide one of lineItems, items, or sessionId."
          );
        if (!d || !f)
          throw new u.a(
            "stripe.redirectToCheckout: You must provide successUrl and cancelUrl."
          );
        return Object(r.a)(
          {
            tag: "no-session",
            items: l,
            lineItems: p,
            successUrl: d,
            cancelUrl: f,
            mode: m,
          },
          _
        );
      },
      Ic = function (e, t, n) {
        var r = Ac(e, t, n);
        if ("no-session" === r.tag) {
          var a = r.successUrl,
            o = r.cancelUrl;
          if (!Object(g.b)(a))
            throw new u.a(
              "stripe.redirectToCheckout: successUrl must start with either http:// or https://."
            );
          if (!Object(g.b)(o))
            throw new u.a(
              "stripe.redirectToCheckout: cancelUrl must start with either http:// or https://."
            );
          return r;
        }
        return r;
      },
      Cc = function (e, t) {
        return "session" === t.tag ||
          null == e ||
          t.locale ||
          -1 === ["auto"].concat(Object(i.a)(kc)).indexOf(e)
          ? t
          : Object(r.a)(Object(r.a)({}, t), {}, { locale: e });
      },
      Nc = function (e, t, n) {
        var r = Object(p.a)(gc, function (t) {
          return Ht(e, t);
        });
        if (t && t.lineItems && r)
          throw new u.a("Prices cannot be used with ".concat(r));
        if ("string" == typeof t && Sc.test(t))
          throw new u.a(
            "stripe.redirectToCheckout: Checkout Session IDs must be passed in as an object with a key of `sessionId` and the Session ID as the value."
          );
        switch (r) {
          case "checkout_beta_2":
            return Tc(0, t);
          case "checkout_beta_3":
            return Ac(e, t, n);
          case "checkout_beta_4":
          default:
            return Ic(e, t, n);
        }
      },
      Rc = function (e, t, n) {
        var r =
          arguments.length > 3 && void 0 !== arguments[3]
            ? arguments[3]
            : "unknown";
        return Cc(t, Nc(e, n, r));
      },
      Mc = function (e, t) {
        return lo(t).then(function (t) {
          return po(e, "redirectToCheckout", t), { error: t.error };
        });
      },
      Lc = function (e) {
        switch (e.type) {
          case "object":
            return { token: e.object };
          case "error":
            return { error: e.error };
          default:
            return Object(l.a)(e);
        }
      },
      xc = function (e) {
        return "object" == typeof e && null !== e ? e : {};
      },
      Dc = function (e) {
        switch (e.type) {
          case "object":
            return { radarSession: e.object };
          case "error":
            return { error: e.error };
          default:
            return Object(l.a)(e);
        }
      },
      Bc = "securitypolicyviolation",
      qc = window,
      Fc = /^require-trusted-types-for/,
      Uc = "LOAD_ERROR",
      Hc = "REPORT_ONLY",
      Yc = "BLOCKED",
      Gc = new Bt.a(),
      zc = document ? document.readyState : "unknown",
      Wc = !1;
    switch (zc) {
      case "loading":
        Wc = !0;
        break;
      case "interactive":
        try {
          var Kc = function () {
            Wc = !0;
          };
          setTimeout(function () {
            document.removeEventListener("DOMContentLoaded", Kc);
          }, 0),
            document.addEventListener("DOMContentLoaded", Kc);
        } catch (e) {}
    }
    var Vc,
      Jc = !1,
      $c = function e(t, a, o, i) {
        if (!Jc || i) {
          Jc = !0;
          var s = i || new Bt.a();
          if ("complete" === document.readyState) {
            var u = null,
              l = null,
              p = null,
              d = null,
              f = null;
            if (window.performance) {
              if (window.performance.timing) {
                var m = window.performance.timing,
                  _ = m.fetchStart;
                (u = m.domLoading - _),
                  (l = m.domInteractive - _),
                  (p = m.domComplete - _),
                  (d = Bt.a.fromPosixTime(_).getElapsedTime(Gc));
              }
              if (window.performance.getEntriesByType) {
                var h = window.performance.getEntriesByType("resource"),
                  y = "https://js.stripe.com/v3/".replace(/\/$/, "");
                f = h.reduce(function (e, t) {
                  if (0 === t.name.indexOf(y)) {
                    var n = t.name.match(/\/([^/#?]*)\/?(?:$|[#?])/);
                    if (n && n[1]) {
                      var a = n[1].replace(/-[0-9a-f]{32}\./, ".");
                      return (
                        "v3" === a && (a = "stripe.js"),
                        Object(r.a)(
                          Object(r.a)({}, e),
                          {},
                          Object(c.a)({}, a, {
                            transfer_size: t.transferSize,
                            duration: Math.round(t.duration),
                          })
                        )
                      );
                    }
                  }
                  return e;
                }, {});
              }
            }
            t.report("timings", {
              element: t.controllerFor(),
              dom_loading: u,
              dom_interactive: l,
              dom_complete: p,
              since_fetch: d,
              load_count: 1,
              load_before_dom_content_loaded: Wc,
              load_ready_state: zc,
              first_create_ready_state: a,
              first_mount_readyState: o,
              until_first_create: Gc.getElapsedTime(t._createTimestamp),
              until_first_mount: t._mountTimestamp
                ? Gc.getElapsedTime(t._mountTimestamp)
                : null,
              until_first_load: Gc.getElapsedTime(s),
              resource_timings: f,
            }),
              setTimeout(function () {
                new ce.a(function (e) {
                  if (qc.trustedTypes && qc.Promise) {
                    var t,
                      r = !1,
                      a = function (e) {
                        (Fc.test(e.effectiveDirective) ||
                          Fc.test(e.violatedDirective)) &&
                          (Object(Xe.b)(e.blockedURI) ||
                            Object(Xe.b)(e.sourceFile)) &&
                          (r = !0);
                      },
                      o = function () {
                        return r ? Yc : Uc;
                      };
                    qc.addEventListener(Bc, a);
                    try {
                      t = n
                        .e(5)
                        .then(n.bind(null, 51))
                        .then(function (e) {
                          return (e.loaded && r ? Hc : "ALLOWED") || Uc;
                        }, o);
                    } catch (e) {
                      t = new ce.a(function (e) {
                        return setTimeout(e, 0);
                      }).then(o);
                    }
                    t.then(function () {
                      qc.removeEventListener(Bc, a);
                    }),
                      e(t);
                  } else e("NOT_SUPPORTED");
                }).then(function (e) {
                  t.report("trusted_types_check", { result: e }),
                    (function (e) {
                      switch (e) {
                        case Hc:
                        case Yc:
                          return !0;
                      }
                      return !1;
                    })(e) &&
                      t.warn(
                        "We noticed that you are using Trusted Types. Nothing has broken, but we plan to add dynamic loading to parts of Stripe.js. Please allow scripts from 'https://js.stripe.com' in your default Trusted Types policy. For more information: https://stripe.com/docs/security/guide#content-security-policy"
                      );
                });
              }, 5e3);
          } else
            window.addEventListener("load", function () {
              try {
                e(t, a, o, s);
              } catch (e) {}
            });
        }
      },
      Xc = $({
        apiKey: D,
        stripeAccount: S(D),
        locale: S(D),
        apiVersion: S(D),
        __privateApiUrl: S(D),
        __checkout: S($({ mids: $({ muid: D, sid: D }) })),
        __hosted3DS: S(q),
        canCreateRadarSession: S(q),
        betas: S(z(R.apply(void 0, Object(i.a)(Ut)))),
      }),
      Zc = function (e) {
        return "You have an in-flight "
          .concat(
            e,
            "! Please be sure to disable your form submit button when "
          )
          .concat(e, " is called.");
      },
      Qc = function (e) {
        return function () {
          throw new u.a(
            "You cannot call `stripe.".concat(
              e,
              "` without supplying an appropriate beta flag when initializing Stripe.js."
            )
          );
        };
      },
      es = function (e) {
        return function () {
          throw new u.a(
            "You cannot call `stripe.".concat(
              e,
              "` without supplying an Issuing beta flag when initializing Stripe.js."
            )
          );
        };
      },
      ts = (function () {
        function e(t, n) {
          var o = this;
          Object(a.a)(this, e),
            (this._listenerRegistry = Pt()),
            (this.elements = de(
              function (e) {
                return new za(
                  o._controller,
                  o._listenerRegistry,
                  {
                    stripeJsLoadTimestamp: Gc,
                    stripeCreateTimestamp: o._controller._createTimestamp,
                  },
                  Object(r.a)(
                    Object(r.a)(
                      Object(r.a)({}, o._locale ? { locale: o._locale } : {}),
                      e
                    ),
                    { betas: o._betas }
                  )
                );
              },
              void 0,
              "elements"
            )),
            (this.createToken = _e(
              function (e, t) {
                var n = o._mids();
                return "cvc_update" === e
                  ? (function (e, t, n) {
                      var r = ia(t);
                      if (r && "cardCvc" === r._componentName) {
                        var a = r._implementation._frame.id;
                        return e.action
                          .tokenizeCvcUpdate({ frameId: a, mids: n })
                          .then(Lc);
                      }
                      throw new u.a(
                        "You must provide a `cardCvc` Element to create a `cvc_update` token."
                      );
                    })(o._controller, t, n)
                  : (function (e, t) {
                      return function (n, r) {
                        var a = ia(n);
                        if (a) {
                          var o = a._implementation._frame.id,
                            i = a._componentName,
                            c = xc(r);
                          return e.action
                            .tokenizeWithElement({
                              frameId: o,
                              elementName: i,
                              tokenData: c,
                              mids: t,
                            })
                            .then(Lc);
                        }
                        if ("string" == typeof n) {
                          var s = n,
                            l = xc(r);
                          return e.action
                            .tokenizeWithData({
                              elementName: null,
                              type: s,
                              tokenData: l,
                              mids: t,
                            })
                            .then(Lc);
                        }
                        throw new u.a(
                          "You must provide a Stripe Element or a valid token type to create a Token."
                        );
                      };
                    })(o._controller, n)(e, t);
              },
              void 0,
              "createToken"
            )),
            (this.createSource = _e(
              function (e, t) {
                var n = ia(e),
                  r = ao(n ? t : e),
                  a = r || { type: null, data: {} },
                  i = a.type,
                  c = a.data;
                if (n) {
                  var s = n._implementation._frame.id,
                    l = n._componentName;
                  return !r && ua(l)
                    ? ce.a.reject(
                        new u.a(
                          "Please provide Source creation parameters to createSource."
                        )
                      )
                    : o._controller.action
                        .createSourceWithElement({
                          frameId: s,
                          elementName: l,
                          type: i,
                          sourceData: c,
                          mids: o._mids(),
                        })
                        .then(oo);
                }
                return r
                  ? i
                    ? o._controller.action
                        .createSourceWithData({
                          elementName: null,
                          type: i,
                          sourceData: c,
                          mids: o._mids(),
                        })
                        .then(oo)
                    : ce.a.reject(
                        new u.a("Please provide a source type to createSource.")
                      )
                  : ce.a.reject(
                      new u.a(
                        "Please provide either an Element or Source creation parameters to createSource."
                      )
                    );
              },
              void 0,
              "createSource"
            )),
            (this.retrieveSource = me(
              function (e) {
                var t = Z(co, { source: e }, "retrieveSource"),
                  n = t.value;
                return (
                  t.warnings.forEach(function (e) {
                    return o._controller.warn(e);
                  }),
                  o._controller.action.retrieveSource(n).then(oo)
                );
              },
              void 0,
              "retrieveSource"
            )),
            (this.paymentRequest = fe(
              function (e, t) {
                !(function (e) {
                  if (e === b.unknown)
                    throw new u.a(
                      "It looks like you're using an older Stripe key. In order to use this API, you'll need to use a modern API key, which is prefixed with 'pk_live_' or 'pk_test_'.\n    You can roll your publishable key here: https://dashboard.stripe.com/account/apikeys"
                    );
                })(o._keyMode);
                var n = o._isCheckout && t ? t : null;
                return Wa(
                  o._controller,
                  { apiKey: o._apiKey, accountId: o._stripeAccount },
                  o._mids(),
                  e,
                  o._betas,
                  n,
                  o._listenerRegistry
                );
              },
              void 0,
              "paymentRequest"
            ));
          var i = new Bt.a(),
            c = Z(Xc, t || {}, "Stripe()"),
            s = c.value,
            l = c.warnings,
            p = s.apiKey,
            d = s.stripeAccount,
            f = s.apiVersion,
            m = s.locale,
            _ = s.__privateApiUrl,
            h = s.__checkout,
            y = s.__hosted3DS,
            g = s.canCreateRadarSession,
            E = s.betas;
          eo(p),
            (null == h ? void 0 : h.mids) &&
              (e._ec = Lt({ checkoutIds: h.mids })),
            (this._apiKey = p.trim()),
            (this._keyMode = v(this._apiKey)),
            (this._betas = E || []),
            (this._locale = bn(m, this._betas) || null),
            (this._stripeAccount = d || null),
            (this._isCheckout = !!h),
            this._attachControllerGetter(f, _, d, i),
            l.forEach(function (e) {
              return o._controller.warn(e);
            }),
            Gt(),
            this._ensureHTTPS(),
            this._ensureStripeHosted(n),
            this._attachPaymentIntentMethods(this._betas, !!y),
            this._attachLegacyPaymentIntentMethods(this._betas),
            this._attachCheckoutMethods(this._betas),
            this._attachPrivateMethodsForCheckout(this._isCheckout),
            this._attachCreateRadarSession(g || !1),
            this._attachGetters(),
            this._attachIssuingCardMethods(this._betas),
            this._attachIdentityMethods(this._betas),
            this._attachLinkedAccounts(this._betas),
            this._attachAppInfo();
        }
        return (
          Object(o.a)(e, [
            {
              key: "_attachCreateRadarSession",
              value: function (e) {
                var t,
                  n,
                  r,
                  a = this;
                e &&
                  (this.createRadarSession =
                    ((t = function () {
                      return a._midsPromise().then(function (e) {
                        return (
                          (t = a._controller),
                          (n = e),
                          t.action.createRadarSession({ mids: n }).then(Dc)
                        );
                        var t, n;
                      });
                    }),
                    function () {
                      var e = this;
                      try {
                        return t.call(this).catch(function (t) {
                          return pe(t, n || (e && e._controller), !0, r);
                        });
                      } catch (e) {
                        return pe(e, n || (this && this._controller), !1, r);
                      }
                    }));
              },
            },
            {
              key: "_attachPaymentIntentMethods",
              value: function (e, t) {
                var n,
                  r,
                  a,
                  o = this,
                  i = function () {
                    return o._mids();
                  };
                (this.createPaymentMethod =
                  ((n = function () {
                    for (
                      var e = arguments.length, t = new Array(e), n = 0;
                      n < e;
                      n++
                    )
                      t[n] = arguments[n];
                    return uo.apply(void 0, [o._controller, i()].concat(t));
                  }),
                  (r = void 0),
                  (a = "createPaymentMethod"),
                  function (e, t, o) {
                    try {
                      return n.call(this, e, t, o);
                    } catch (e) {
                      return pe(e, r || (this && this._controller), !1, a);
                    }
                  })),
                  (this._createPaymentMethod = this.createPaymentMethod),
                  (this.retrievePaymentIntent = me(
                    function (e) {
                      return (function (e, t) {
                        var n = mo(e, "retrievePaymentIntent");
                        return t.action
                          .retrievePaymentIntent({
                            intentSecret: n,
                            hosted: !1,
                          })
                          .then(la);
                      })(e, o._controller);
                    },
                    void 0,
                    "retrievePaymentIntent"
                  )),
                  (this.retrieveSetupIntent = me(
                    function (e) {
                      return (function (e, t) {
                        var n = _o(e, "retrieveSetupIntent");
                        return t.action
                          .retrieveSetupIntent({ intentSecret: n, hosted: !1 })
                          .then(pa);
                      })(e, o._controller);
                    },
                    void 0,
                    "retrieveSetupIntent"
                  )),
                  (this.updatePaymentIntent = Qc("updatePaymentIntent")),
                  (Ht(this._betas, qt.line_items_beta_1) ||
                    Ht(this._betas, qt.tax_product_beta_1)) &&
                    (this.updatePaymentIntent = _e(
                      function () {
                        for (
                          var e = arguments.length, t = new Array(e), n = 0;
                          n < e;
                          n++
                        )
                          t[n] = arguments[n];
                        return Ei.apply(void 0, [o._controller, i()].concat(t));
                      },
                      void 0,
                      "updatePaymentIntent"
                    ));
                var c = Object(Hn.a)(Oi, Zc("handleCardAction"));
                this.handleCardAction = me(
                  function (e) {
                    return c(e, o._controller);
                  },
                  void 0,
                  "handleCardAction"
                );
                var s = Object(Hn.a)(ti, Zc("confirmCardPayment"));
                this.confirmCardPayment = he(
                  function () {
                    for (
                      var e = arguments.length, t = new Array(e), n = 0;
                      n < e;
                      n++
                    )
                      t[n] = arguments[n];
                    return s.apply(void 0, [o._controller, i()].concat(t));
                  },
                  void 0,
                  "confirmCardPayment"
                );
                var u = Object(Hn.a)(Xi, Zc("confirmCardSetup"));
                (this.confirmCardSetup = he(
                  function () {
                    for (
                      var e = arguments.length, t = new Array(e), n = 0;
                      n < e;
                      n++
                    )
                      t[n] = arguments[n];
                    return u.apply(void 0, [o._controller, i()].concat(t));
                  },
                  void 0,
                  "confirmCardSetup"
                )),
                  (this.confirmIdealPayment = he(
                    function () {
                      for (
                        var e = arguments.length, t = new Array(e), n = 0;
                        n < e;
                        n++
                      )
                        t[n] = arguments[n];
                      return ii.apply(void 0, [o._controller, i()].concat(t));
                    },
                    void 0,
                    "confirmIdealPayment"
                  )),
                  (this.confirmSepaDebitPayment = he(
                    function () {
                      for (
                        var e = arguments.length, t = new Array(e), n = 0;
                        n < e;
                        n++
                      )
                        t[n] = arguments[n];
                      return fi.apply(void 0, [o._controller, i()].concat(t));
                    },
                    void 0,
                    "confirmSepaDebitPayment"
                  )),
                  (this.confirmSepaDebitSetup = he(
                    function () {
                      for (
                        var e = arguments.length, t = new Array(e), n = 0;
                        n < e;
                        n++
                      )
                        t[n] = arguments[n];
                      return Zi.apply(void 0, [o._controller, i()].concat(t));
                    },
                    void 0,
                    "confirmSepaDebitSetup"
                  )),
                  (this.confirmFpxPayment = he(
                    function () {
                      for (
                        var e = arguments.length, t = new Array(e), n = 0;
                        n < e;
                        n++
                      )
                        t[n] = arguments[n];
                      return ri.apply(void 0, [o._controller, i()].concat(t));
                    },
                    void 0,
                    "confirmFpxPayment"
                  )),
                  (this.confirmAlipayPayment = he(
                    function () {
                      for (
                        var e = arguments.length, t = new Array(e), n = 0;
                        n < e;
                        n++
                      )
                        t[n] = arguments[n];
                      return li.apply(void 0, [o._controller, i()].concat(t));
                    },
                    void 0,
                    "confirmAlipayPayment"
                  )),
                  (this.confirmAlipaySetup = he(
                    function () {
                      for (
                        var e = arguments.length, t = new Array(e), n = 0;
                        n < e;
                        n++
                      )
                        t[n] = arguments[n];
                      return nc.apply(void 0, [o._controller, i()].concat(t));
                    },
                    void 0,
                    "confirmAlipaySetup"
                  )),
                  (this.confirmAuBecsDebitPayment = he(
                    function () {
                      for (
                        var e = arguments.length, t = new Array(e), n = 0;
                        n < e;
                        n++
                      )
                        t[n] = arguments[n];
                      return Xo.apply(void 0, [o._controller, i()].concat(t));
                    },
                    void 0,
                    "confirmAuBecsDebitPayment"
                  )),
                  (this.confirmAuBecsDebitSetup = he(
                    function () {
                      for (
                        var e = arguments.length, t = new Array(e), n = 0;
                        n < e;
                        n++
                      )
                        t[n] = arguments[n];
                      return Qi.apply(void 0, [o._controller, i()].concat(t));
                    },
                    void 0,
                    "confirmAuBecsDebitSetup"
                  )),
                  (this.confirmBacsDebitPayment = he(
                    function () {
                      for (
                        var e = arguments.length, t = new Array(e), n = 0;
                        n < e;
                        n++
                      )
                        t[n] = arguments[n];
                      return Zo.apply(void 0, [o._controller, i()].concat(t));
                    },
                    void 0,
                    "confirmBacsDebitPayment"
                  )),
                  (this.confirmBacsDebitSetup = he(
                    function () {
                      for (
                        var e = arguments.length, t = new Array(e), n = 0;
                        n < e;
                        n++
                      )
                        t[n] = arguments[n];
                      return ec.apply(void 0, [o._controller, i()].concat(t));
                    },
                    void 0,
                    "confirmBacsDebitSetup"
                  )),
                  (this.confirmBancontactPayment = he(
                    function () {
                      for (
                        var e = arguments.length, t = new Array(e), n = 0;
                        n < e;
                        n++
                      )
                        t[n] = arguments[n];
                      return Qo.apply(void 0, [o._controller, i()].concat(t));
                    },
                    void 0,
                    "confirmBancontactPayment"
                  )),
                  (this.confirmBoletoPayment = he(
                    function () {
                      for (
                        var e = arguments.length, t = new Array(e), n = 0;
                        n < e;
                        n++
                      )
                        t[n] = arguments[n];
                      return ei.apply(void 0, [o._controller, i()].concat(t));
                    },
                    void 0,
                    "confirmBoletoPayment"
                  )),
                  (this.confirmEpsPayment = he(
                    function () {
                      for (
                        var e = arguments.length, t = new Array(e), n = 0;
                        n < e;
                        n++
                      )
                        t[n] = arguments[n];
                      return ni.apply(void 0, [o._controller, i()].concat(t));
                    },
                    void 0,
                    "confirmEpsPayment"
                  )),
                  (this.confirmGiropayPayment = he(
                    function () {
                      for (
                        var e = arguments.length, t = new Array(e), n = 0;
                        n < e;
                        n++
                      )
                        t[n] = arguments[n];
                      return ai.apply(void 0, [o._controller, i()].concat(t));
                    },
                    void 0,
                    "confirmGiropayPayment"
                  )),
                  (this.confirmOxxoPayment = he(
                    function () {
                      for (
                        var e = arguments.length, t = new Array(e), n = 0;
                        n < e;
                        n++
                      )
                        t[n] = arguments[n];
                      return ui.apply(void 0, [o._controller, i()].concat(t));
                    },
                    void 0,
                    "confirmOxxoPayment"
                  )),
                  (this.confirmP24Payment = he(
                    function () {
                      for (
                        var e = arguments.length, t = new Array(e), n = 0;
                        n < e;
                        n++
                      )
                        t[n] = arguments[n];
                      return pi.apply(void 0, [o._controller, i()].concat(t));
                    },
                    void 0,
                    "confirmP24Payment"
                  )),
                  (this.confirmSofortPayment = he(
                    function () {
                      for (
                        var e = arguments.length, t = new Array(e), n = 0;
                        n < e;
                        n++
                      )
                        t[n] = arguments[n];
                      return mi.apply(void 0, [o._controller, i()].concat(t));
                    },
                    void 0,
                    "confirmSofortPayment"
                  )),
                  (this.confirmIdealSetup = he(
                    function () {
                      for (
                        var e = arguments.length, t = new Array(e), n = 0;
                        n < e;
                        n++
                      )
                        t[n] = arguments[n];
                      return tc.apply(void 0, [o._controller, i()].concat(t));
                    },
                    void 0,
                    "confirmIdealSetup"
                  )),
                  (this.confirmSofortSetup = he(
                    function () {
                      for (
                        var e = arguments.length, t = new Array(e), n = 0;
                        n < e;
                        n++
                      )
                        t[n] = arguments[n];
                      return rc.apply(void 0, [o._controller, i()].concat(t));
                    },
                    void 0,
                    "confirmSofortSetup"
                  )),
                  (this.confirmBancontactSetup = he(
                    function () {
                      for (
                        var e = arguments.length, t = new Array(e), n = 0;
                        n < e;
                        n++
                      )
                        t[n] = arguments[n];
                      return ac.apply(void 0, [o._controller, i()].concat(t));
                    },
                    void 0,
                    "confirmBancontactSetup"
                  )),
                  (this.confirmGrabPayPayment = he(
                    function () {
                      for (
                        var e = arguments.length, t = new Array(e), n = 0;
                        n < e;
                        n++
                      )
                        t[n] = arguments[n];
                      return oi.apply(void 0, [o._controller, i()].concat(t));
                    },
                    void 0,
                    "confirmGrabPayPayment"
                  )),
                  (this.confirmAfterpayClearpayPayment = he(
                    function () {
                      for (
                        var e = arguments.length, t = new Array(e), n = 0;
                        n < e;
                        n++
                      )
                        t[n] = arguments[n];
                      return $o.apply(void 0, [o._controller, i()].concat(t));
                    },
                    void 0,
                    "confirmAfterpayClearpayPayment"
                  )),
                  (this.verifyMicrodepositsForPayment = _e(
                    function () {
                      for (
                        var e = arguments.length, t = new Array(e), n = 0;
                        n < e;
                        n++
                      )
                        t[n] = arguments[n];
                      return wi.apply(void 0, [o._controller].concat(t));
                    },
                    void 0,
                    "verifyMicrodepositsForPayment"
                  )),
                  (this.verifyMicrodepositsForSetup = _e(
                    function () {
                      for (
                        var e = arguments.length, t = new Array(e), n = 0;
                        n < e;
                        n++
                      )
                        t[n] = arguments[n];
                      return sc.apply(void 0, [o._controller].concat(t));
                    },
                    void 0,
                    "verifyMicrodepositsForSetup"
                  )),
                  Ht(this._betas, qt.acss_debit_beta_1)
                    ? ((this.confirmAcssDebitPayment = he(
                        function () {
                          for (
                            var e = arguments.length, t = new Array(e), n = 0;
                            n < e;
                            n++
                          )
                            t[n] = arguments[n];
                          return Jo.apply(
                            void 0,
                            [o._controller, i()].concat(t)
                          );
                        },
                        void 0,
                        "confirmAcssDebitPayment"
                      )),
                      (this.confirmAcssDebitSetup = he(
                        function () {
                          for (
                            var e = arguments.length, t = new Array(e), n = 0;
                            n < e;
                            n++
                          )
                            t[n] = arguments[n];
                          return $i.apply(
                            void 0,
                            [o._controller, i()].concat(t)
                          );
                        },
                        void 0,
                        "confirmAcssDebitSetup"
                      )))
                    : ((this.confirmAcssDebitPayment = he(
                        function () {
                          for (
                            var e = arguments.length, t = new Array(e), n = 0;
                            n < e;
                            n++
                          )
                            t[n] = arguments[n];
                          return Ti.apply(
                            void 0,
                            [o._controller, i()].concat(t)
                          );
                        },
                        void 0,
                        "confirmAcssDebitPayment"
                      )),
                      (this.confirmAcssDebitSetup = he(
                        function () {
                          for (
                            var e = arguments.length, t = new Array(e), n = 0;
                            n < e;
                            n++
                          )
                            t[n] = arguments[n];
                          return Ai.apply(
                            void 0,
                            [o._controller, i()].concat(t)
                          );
                        },
                        void 0,
                        "confirmAcssDebitSetup"
                      ))),
                  Ht(this._betas, qt.return_intents_beta_1) &&
                    (this.confirmReturnIntent = _e(
                      function () {
                        for (
                          var e = arguments.length, t = new Array(e), n = 0;
                          n < e;
                          n++
                        )
                          t[n] = arguments[n];
                        return zi.apply(void 0, [o._controller].concat(t));
                      },
                      void 0,
                      "confirmReturnIntent"
                    )),
                  (this.confirmKlarnaPayment = Qc("confirmKlarnaPayment")),
                  Ht(this._betas, qt.klarna_pm_beta_1) &&
                    (this.confirmKlarnaPayment = he(
                      function () {
                        for (
                          var e = arguments.length, t = new Array(e), n = 0;
                          n < e;
                          n++
                        )
                          t[n] = arguments[n];
                        return ci.apply(void 0, [o._controller, i()].concat(t));
                      },
                      void 0,
                      "confirmKlarnaPayment"
                    )),
                  (this.confirmKonbiniPayment = Qc("confirmKonbiniPayment")),
                  Ht(this._betas, qt.konbini_pm_beta_1) &&
                    (this.confirmKonbiniPayment = he(
                      function () {
                        for (
                          var e = arguments.length, t = new Array(e), n = 0;
                          n < e;
                          n++
                        )
                          t[n] = arguments[n];
                        return si.apply(void 0, [o._controller, i()].concat(t));
                      },
                      void 0,
                      "confirmKonbiniPayment"
                    )),
                  Ht(this._betas, qt.oxxo_pm_beta_1) &&
                    (this.confirmOxxoPayment = he(
                      function () {
                        for (
                          var e = arguments.length, t = new Array(e), n = 0;
                          n < e;
                          n++
                        )
                          t[n] = arguments[n];
                        return ui.apply(void 0, [o._controller, i()].concat(t));
                      },
                      void 0,
                      "confirmOxxoPayment"
                    )),
                  (this.confirmWechatPayPayment = Qc(
                    "confirmWechatPayPayment"
                  )),
                  Ht(this._betas, qt.wechat_pay_pm_beta_1) &&
                    (this.confirmWechatPayPayment = he(
                      function () {
                        for (
                          var e = arguments.length, t = new Array(e), n = 0;
                          n < e;
                          n++
                        )
                          t[n] = arguments[n];
                        return bi.apply(void 0, [o._controller, i()].concat(t));
                      },
                      void 0,
                      "confirmWechatPayPayment"
                    )),
                  Ht(this._betas, qt.wechat_pay_pm_beta_2) &&
                    (this.confirmWechatPayPayment = he(
                      function () {
                        for (
                          var e = arguments.length, t = new Array(e), n = 0;
                          n < e;
                          n++
                        )
                          t[n] = arguments[n];
                        return vi.apply(void 0, [o._controller, i()].concat(t));
                      },
                      void 0,
                      "confirmWechatPayPayment"
                    )),
                  (this.confirmPayPalPayment = Qc("confirmPayPalPayment")),
                  Ht(this._betas, qt.paypal_pm_beta_1) &&
                    (this.confirmPayPalPayment = he(
                      function () {
                        for (
                          var e = arguments.length, t = new Array(e), n = 0;
                          n < e;
                          n++
                        )
                          t[n] = arguments[n];
                        return di.apply(void 0, [o._controller, i()].concat(t));
                      },
                      void 0,
                      "confirmPayPalPayment"
                    )),
                  Ht(this._betas, qt.paypal_pm_beta_1) &&
                    (this.confirmPayPalSetup = he(
                      function () {
                        for (
                          var e = arguments.length, t = new Array(e), n = 0;
                          n < e;
                          n++
                        )
                          t[n] = arguments[n];
                        return ic.apply(void 0, [o._controller, i()].concat(t));
                      },
                      void 0,
                      "confirmPayPalSetup"
                    )),
                  (this.confirmUpiPayment = Qc("confirmUpiPayment")),
                  Ht(this._betas, qt.upi_beta_1) &&
                    (this.confirmUpiPayment = he(
                      function () {
                        for (
                          var e = arguments.length, t = new Array(e), n = 0;
                          n < e;
                          n++
                        )
                          t[n] = arguments[n];
                        return hi.apply(void 0, [o._controller, i()].concat(t));
                      },
                      void 0,
                      "confirmUpiPayment"
                    )),
                  Ht(this._betas, qt.us_bank_account_beta_1) &&
                    ((this.confirmUsBankAccountPayment = he(
                      function () {
                        for (
                          var e = arguments.length, t = new Array(e), n = 0;
                          n < e;
                          n++
                        )
                          t[n] = arguments[n];
                        return yi.apply(void 0, [o._controller, i()].concat(t));
                      },
                      void 0,
                      "confirmUsBankAccountPayment"
                    )),
                    (this.confirmUsBankAccountSetup = he(
                      function () {
                        for (
                          var e = arguments.length, t = new Array(e), n = 0;
                          n < e;
                          n++
                        )
                          t[n] = arguments[n];
                        return cc.apply(void 0, [o._controller, i()].concat(t));
                      },
                      void 0,
                      "confirmUsBankAccountSetup"
                    ))),
                  (this.confirmNetbankingPayment = Qc(
                    "confirmNetbankingPayment"
                  )),
                  Ht(this._betas, qt.netbanking_beta_1) &&
                    (this.confirmNetbankingPayment = he(
                      function () {
                        for (
                          var e = arguments.length, t = new Array(e), n = 0;
                          n < e;
                          n++
                        )
                          t[n] = arguments[n];
                        return gi.apply(void 0, [o._controller, i()].concat(t));
                      },
                      void 0,
                      "confirmNetbankingPayment"
                    )),
                  (this.confirmInstantDebitsPilotPayment = Qc(
                    "confirmInstantDebitsPilotPayment"
                  )),
                  Ht(this._betas, qt.instant_debits_beta_1) &&
                    (this.confirmInstantDebitsPilotPayment = he(
                      function () {
                        for (
                          var e = arguments.length, t = new Array(e), n = 0;
                          n < e;
                          n++
                        )
                          t[n] = arguments[n];
                        return Ni.apply(void 0, [o._controller, i()].concat(t));
                      },
                      void 0,
                      "confirmInstantDebitsPilotPayment"
                    )),
                  (this.confirmIdBankTransferPayment = Qc(
                    "confirmIdBankTransferPayment"
                  )),
                  (this.confirmIdBankTransferSetup = Qc(
                    "confirmIdBankTransferSetup"
                  )),
                  Ht(this._betas, qt.id_bank_transfer_beta_1) &&
                    ((this.confirmIdBankTransferPayment = he(
                      function () {
                        for (
                          var e = arguments.length, t = new Array(e), n = 0;
                          n < e;
                          n++
                        )
                          t[n] = arguments[n];
                        return _i.apply(void 0, [o._controller, i()].concat(t));
                      },
                      void 0,
                      "confirmIdBankTransferPayment"
                    )),
                    (this.confirmIdBankTransferSetup = he(
                      function () {
                        for (
                          var e = arguments.length, t = new Array(e), n = 0;
                          n < e;
                          n++
                        )
                          t[n] = arguments[n];
                        return oc.apply(void 0, [o._controller, i()].concat(t));
                      },
                      void 0,
                      "confirmIdBankTransferSetup"
                    ))),
                  (Ht(this._betas, qt.link_beta_1) ||
                    Ht(this._betas, qt.payment_element_beta_1)) &&
                    ((this.confirmPayment = me(
                      function (e) {
                        return (function (e, t, n) {
                          var r = Ko(e, t, n, "stripe.confirmPayment()"),
                            a = r.request,
                            o = r.returnUrl;
                          return e.action
                            .confirmPaymentIntent(a)
                            .then(Wo(e, null, !1, !1))
                            .then(function (t) {
                              return t.paymentIntent
                                ? lo(bo(o, t.paymentIntent)).then(function (n) {
                                    return (
                                      po(e, "confirmPayment redirect", n),
                                      la(n, t.paymentIntent)
                                    );
                                  })
                                : t;
                            });
                        })(o._controller, i(), e);
                      },
                      void 0,
                      "confirmPayment"
                    )),
                    (this.confirmSetup = me(
                      function (e) {
                        return (function (e, t, n) {
                          var r = Ko(e, t, n, "stripe.confirmSetup()"),
                            a = r.request,
                            o = r.returnUrl;
                          return e.action
                            .confirmSetupIntent(a)
                            .then(Vi(e, null, !1, !1))
                            .then(function (t) {
                              return t.setupIntent
                                ? lo(bo(o, t.setupIntent)).then(function (n) {
                                    return (
                                      po(e, "confirmSetup redirect", n),
                                      pa(n, t.setupIntent)
                                    );
                                  })
                                : t;
                            });
                        })(o._controller, i(), e);
                      },
                      void 0,
                      "confirmSetup"
                    ))),
                  t &&
                    ((this.handleHosted3DS2Payment = me(function (e) {
                      return (function (e, t) {
                        var n = mo(e, "handleHosted3DS2Setup [internal]");
                        return t.action
                          .retrievePaymentIntent({
                            intentSecret: n,
                            hosted: !0,
                          })
                          .then(Wo(t, ca.card, !1, !0));
                      })(e, o._controller);
                    })),
                    (this.handleHosted3DS2Setup = me(function (e) {
                      return (function (e, t) {
                        var n = _o(e, "handleHosted3DS2Setup [internal]");
                        return t.action
                          .retrieveSetupIntent({ intentSecret: n, hosted: !0 })
                          .then(Vi(t, ca.card, !1, !0));
                      })(e, o._controller);
                    })));
              },
            },
            {
              key: "_attachLegacyPaymentIntentMethods",
              value: function (e) {
                var t = this,
                  n =
                    Ht(this._betas, qt.payment_intent_beta_1) ||
                    Ht(this._betas, qt.payment_intent_beta_2),
                  r = function () {
                    return t._mids();
                  },
                  a = he(
                    function () {
                      for (
                        var e = arguments.length, n = new Array(e), a = 0;
                        a < e;
                        a++
                      )
                        n[a] = arguments[a];
                      return qi.apply(
                        void 0,
                        [!0, t._controller, r()].concat(n)
                      );
                    },
                    void 0,
                    "confirmPaymentIntent"
                  ),
                  o = he(
                    function () {
                      for (
                        var e = arguments.length, n = new Array(e), a = 0;
                        a < e;
                        a++
                      )
                        n[a] = arguments[a];
                      return qi.apply(
                        void 0,
                        [!1, t._controller, r()].concat(n)
                      );
                    },
                    void 0,
                    "confirmPaymentIntent"
                  ),
                  i = Object(Hn.a)(Fi, Zc("handleCardPayment")),
                  c = he(
                    function () {
                      for (
                        var e = arguments.length, a = new Array(e), o = 0;
                        o < e;
                        o++
                      )
                        a[o] = arguments[o];
                      return i.apply(
                        void 0,
                        [!0, t._controller, r(), n].concat(a)
                      );
                    },
                    void 0,
                    "handleCardPayment"
                  ),
                  s = he(
                    function () {
                      for (
                        var e = arguments.length, a = new Array(e), o = 0;
                        o < e;
                        o++
                      )
                        a[o] = arguments[o];
                      return i.apply(
                        void 0,
                        [!1, t._controller, r(), n].concat(a)
                      );
                    },
                    void 0,
                    "handleCardPayment"
                  ),
                  u = Object(Hn.a)(uc, Zc("handleCardSetup")),
                  l = he(
                    function () {
                      for (
                        var e = arguments.length, n = new Array(e), a = 0;
                        a < e;
                        a++
                      )
                        n[a] = arguments[a];
                      return u.apply(void 0, [t._controller, r()].concat(n));
                    },
                    void 0,
                    "handleCardSetup"
                  ),
                  p = he(
                    function () {
                      for (
                        var e = arguments.length, n = new Array(e), a = 0;
                        a < e;
                        a++
                      )
                        n[a] = arguments[a];
                      return pc.apply(void 0, [t._controller, r()].concat(n));
                    },
                    void 0,
                    "confirmSetupIntent"
                  ),
                  d = he(
                    function () {
                      for (
                        var e = arguments.length, a = new Array(e), o = 0;
                        o < e;
                        o++
                      )
                        a[o] = arguments[o];
                      return Ui.apply(
                        void 0,
                        [t._controller, r(), n].concat(a)
                      );
                    },
                    void 0,
                    "handleSepaDebitPayment"
                  ),
                  f = he(
                    function () {
                      for (
                        var e = arguments.length, n = new Array(e), a = 0;
                        a < e;
                        a++
                      )
                        n[a] = arguments[a];
                      return lc.apply(void 0, [t._controller, r()].concat(n));
                    },
                    void 0,
                    "handleSepaDebitSetup"
                  ),
                  m = he(
                    function () {
                      for (
                        var e = arguments.length, a = new Array(e), o = 0;
                        o < e;
                        o++
                      )
                        a[o] = arguments[o];
                      return Hi.apply(
                        void 0,
                        [!0, t._controller, r(), n].concat(a)
                      );
                    },
                    void 0,
                    "handleIdealPayment"
                  ),
                  _ = he(
                    function () {
                      for (
                        var e = arguments.length, a = new Array(e), o = 0;
                        o < e;
                        o++
                      )
                        a[o] = arguments[o];
                      return Hi.apply(
                        void 0,
                        [!1, t._controller, r(), n].concat(a)
                      );
                    },
                    void 0,
                    "handleIdealPayment"
                  ),
                  h = he(
                    function () {
                      for (
                        var e = arguments.length, a = new Array(e), o = 0;
                        o < e;
                        o++
                      )
                        a[o] = arguments[o];
                      return Yi.apply(
                        void 0,
                        [t._controller, r(), n].concat(a)
                      );
                    },
                    void 0,
                    "handleFpxPayment"
                  );
                (this.handleCardPayment = s),
                  (this.confirmPaymentIntent = o),
                  (this.handleCardSetup = l),
                  (this.confirmSetupIntent = p),
                  (this.fulfillPaymentIntent = Qc("fulfillPaymentIntent")),
                  (this.handleSepaDebitPayment = Qc("handleSepaDebitPayment")),
                  (this.handleSepaDebitSetup = Qc("handleSepaDebitSetup")),
                  (this.handleIdealPayment = Qc("handleIdealPayment")),
                  (this.handleFpxPayment = Qc("handleFpxPayment")),
                  Ht(this._betas, qt.payment_intent_beta_1)
                    ? (this.fulfillPaymentIntent = c)
                    : (Ht(this._betas, qt.payment_intent_beta_3) ||
                        Ht(this._betas, qt.payment_intent_beta_2)) &&
                      (this.handleCardPayment = c),
                  Ht(this._betas, qt.payment_intent_beta_3) &&
                    ((this.confirmPaymentIntent = a),
                    (this.handleIdealPayment = m),
                    (this.handleSepaDebitPayment = d)),
                  Ht(this._betas, qt.fpx_bank_beta_1) &&
                    (this.handleFpxPayment = h),
                  Ht(this._betas, qt.ideal_pm_beta_1) &&
                    (this.handleIdealPayment = _),
                  Ht(this._betas, qt.sepa_pm_beta_1) &&
                    ((this.handleSepaDebitPayment = d),
                    (this.handleSepaDebitSetup = f));
              },
            },
            {
              key: "_attachPrivateMethodsForCheckout",
              value: function (e) {
                var t = this;
                e &&
                  ((this.sendInteractionEvent = Dt),
                  (this.tryNextAction = _e(function (e, n) {
                    var r = Z(ga, e, "Payment Intent").value,
                      a = Object.keys(ca).map(function (e) {
                        return ca[e];
                      }),
                      o = Z(
                        N.apply(void 0, Object(i.a)(a)),
                        n,
                        "Source type"
                      ).value;
                    return "payment_intent" === r.object
                      ? zo(t._controller, r, o, "auto", !1)
                      : Ki(t._controller, r, o, "auto", !1);
                  })));
              },
            },
            {
              key: "_attachCheckoutMethods",
              value: function (e) {
                var t = this,
                  n = function () {
                    return t._mids();
                  },
                  a = e.reduce(function (e, t) {
                    var n = Object(p.a)(Ec, function (e) {
                      return e === t;
                    });
                    return n ? [].concat(Object(i.a)(e), [n]) : e;
                  }, []);
                this.redirectToCheckout = function (e) {
                  return (function (e, t, n, a, o) {
                    var i = Rc(t, a, o, e.keyMode());
                    if (
                      (e.report("redirect_to_checkout.options", {
                        betas: t,
                        options: ct(i, ["mode", "sessionId"]),
                        globalLocale: a,
                      }),
                      "session" === i.tag)
                    ) {
                      var c = i.sessionId;
                      return e.action
                        .createPaymentPageWithSession({
                          betas: t,
                          mids: n(),
                          sessionId: c,
                        })
                        .then(function (t) {
                          if ("error" === t.type) return { error: t.error };
                          var n = t.object.url;
                          return Mc(e, n);
                        });
                    }
                    var u = i,
                      l = (u.tag, u.items),
                      p = u.lineItems,
                      d = u.mode,
                      f = u.successUrl,
                      m = u.cancelUrl,
                      _ = u.clientReferenceId,
                      h = u.customerEmail,
                      y = u.billingAddressCollection,
                      b = u.submitType,
                      v = u.allowIncompleteSubscriptions,
                      g = u.shippingAddressCollection,
                      E = s(u, [
                        "tag",
                        "items",
                        "lineItems",
                        "mode",
                        "successUrl",
                        "cancelUrl",
                        "clientReferenceId",
                        "customerEmail",
                        "billingAddressCollection",
                        "submitType",
                        "allowIncompleteSubscriptions",
                        "shippingAddressCollection",
                      ]),
                      w = [];
                    if (p && l)
                      throw new Error(
                        "Only one of items, lineItems can be passed in."
                      );
                    if (p) {
                      if (!d) throw new Error("Expected `mode`");
                      w = p.map(function (e) {
                        if (e.price)
                          return {
                            type: "price",
                            id: e.price,
                            quantity: e.quantity,
                          };
                        throw new Error("Unexpected item shape.");
                      });
                    } else {
                      if (!l)
                        throw new Error("An items field must be passed in.");
                      w = l.map(function (e) {
                        if (e.sku)
                          return {
                            type: "sku",
                            id: e.sku,
                            quantity: e.quantity,
                          };
                        if (e.plan)
                          return {
                            type: "plan",
                            id: e.plan,
                            quantity: e.quantity,
                          };
                        throw new Error("Unexpected item shape.");
                      });
                    }
                    return e.action
                      .createPaymentPage(
                        Object(r.a)(
                          {
                            betas: t,
                            mids: n(),
                            items: w,
                            mode: d,
                            success_url: f,
                            cancel_url: m,
                            client_reference_id: _,
                            customer_email: h,
                            billing_address_collection: y,
                            submit_type: b,
                            allow_incomplete_subscriptions: v,
                            shipping_address_collection: g && {
                              allowed_countries: g.allowedCountries,
                            },
                          },
                          E
                        )
                      )
                      .then(function (t) {
                        if ("error" === t.type) return { error: t.error };
                        var n = t.object.url;
                        return Mc(e, n);
                      });
                  })(t._controller, a, n, t._locale, e);
                };
              },
            },
            {
              key: "_attachGetters",
              value: function () {
                var e = this,
                  t = new ro(function (t) {
                    e._registerWrapper({ name: t, version: null });
                  });
                [
                  "elements",
                  "createToken",
                  "createSource",
                  "createPaymentMethod",
                ].forEach(function (n) {
                  if (e.hasOwnProperty(n)) {
                    var r = e[n],
                      a = function () {
                        t.called(n);
                        for (
                          var e = arguments.length, a = new Array(e), o = 0;
                          o < e;
                          o++
                        )
                          a[o] = arguments[o];
                        return r.apply(this, a);
                      };
                    Object.defineProperty(e, n, {
                      enumerable: !0,
                      get: function () {
                        return t.got(n), a;
                      },
                    });
                  }
                });
              },
            },
            {
              key: "_attachIssuingCardMethods",
              value: function (e) {
                var t = this;
                (this.retrieveIssuingCard = es("retrieveIssuingCard")),
                  (this.createEphemeralKeyNonce = es(
                    "createEphemeralKeyNonce"
                  )),
                  Ht(this._betas, qt.issuing_elements_1)
                    ? (this.retrieveIssuingCard = _e(function (e, n) {
                        return (function (e, t, n) {
                          var r = mc(e, "retrieveIssuingCard"),
                            a = hc(t, "retrieveIssuingCard");
                          return n.action
                            .retrieveIssuingCardWithoutNonce({
                              cardId: r,
                              ephemeralKeySecret: a,
                            })
                            .then(Yr);
                        })(e, n, t._controller);
                      }))
                    : Ht(this._betas, qt.issuing_elements_2) &&
                      ((this.retrieveIssuingCard = _e(function (e, n) {
                        return (function (e, t, n) {
                          var r = mc(e, "retrieveIssuingCard"),
                            a = bc(t);
                          return n.action
                            .retrieveIssuingCard({
                              cardId: r,
                              ephemeralKeySecret: a.ephemeralKeySecret,
                              publicNonce: a.publicNonce,
                            })
                            .then(Yr);
                        })(e, n, t._controller);
                      })),
                      (this.createEphemeralKeyNonce = me(function (e) {
                        return vc(e, t._controller);
                      })));
              },
            },
            {
              key: "_attachIdentityMethods",
              value: function (e) {
                var t = this;
                this.verifyIdentity = me(function (e) {
                  return dc(e, t._controller);
                });
              },
            },
            {
              key: "_attachControllerGetter",
              value: function (t, n, a, o) {
                var i,
                  c = this,
                  s = [],
                  u = document.readyState;
                Object.defineProperties(this, {
                  _registerWrapper: {
                    enumerable: !1,
                    configurable: !0,
                    writable: !1,
                    value: function (e) {
                      s.push(e);
                    },
                  },
                  _controller: {
                    enumerable: !0,
                    configurable: !0,
                    get: function () {
                      return (function () {
                        if (i) return i;
                        var l = document.readyState;
                        return (
                          (i = new ln(
                            Object(r.a)(
                              {
                                apiKey: c._apiKey,
                                apiVersion: t,
                                __privateApiUrl: n,
                                stripeAccount: a,
                                betas: c._betas,
                                stripeJsId: e.stripeJsId,
                                stripeJsLoadTimestamp: Gc,
                                stripeCreateTimestamp: o,
                                onFirstLoad: function () {
                                  try {
                                    $c(i, u, l);
                                  } catch (e) {}
                                },
                                listenerRegistry: c._listenerRegistry,
                              },
                              c._locale ? { locale: c._locale } : {}
                            )
                          )),
                          Object.defineProperties(c, {
                            _registerWrapper: {
                              value: ns,
                              writable: !1,
                              enumerable: !1,
                              configurable: !0,
                            },
                            _controller: {
                              value: i,
                              writable: !0,
                              enumerable: !0,
                              configurable: !0,
                            },
                          }),
                          s.forEach(function (e) {
                            return c._registerWrapper(e);
                          }),
                          s.splice(0),
                          i
                        );
                      })();
                    },
                  },
                });
              },
            },
            {
              key: "_attachLinkedAccounts",
              value: function (e) {
                var t = this;
                (this.linkAccounts = function () {
                  throw new u.a(
                    "You cannot call `stripe.linkAccounts` without supplying a LinkedAccounts beta flag when initializing Stripe.js."
                  );
                }),
                  Ht(e, qt.linked_accounts_beta_1) &&
                    (this.linkAccounts = me(function (e) {
                      return (
                        (n = e),
                        (r = t._controller),
                        Uo(n, "link_account_session", null, r)
                      );
                      var n, r;
                    }));
              },
            },
            {
              key: "_attachAppInfo",
              value: function () {
                var e = this;
                this.registerAppInfo = de(function (t) {
                  var n = X(Va, t, "WrapperLibrary");
                  "error" !== n.type
                    ? e._controller.registerAppInfo(n.value)
                    : e._controller.warn(
                        "Failed to register your library: ".concat(
                          n.error.message
                        )
                      );
                });
              },
            },
            {
              key: "_ensureHTTPS",
              value: function () {
                var e = window.location.protocol,
                  t =
                    -1 !==
                    ["localhost", "127.0.0.1", "0.0.0.0"].indexOf(
                      window.location.hostname
                    ),
                  n =
                    (!0 === window.isSecureContext && !t) ||
                    -1 !==
                      [
                        "https:",
                        "file:",
                        "ionic:",
                        "httpsionic:",
                        "chrome-extension:",
                        "moz-extension:",
                      ].indexOf(e),
                  r = this._keyMode === b.live,
                  a =
                    "Live Stripe.js integrations must use HTTPS. For more information: https://stripe.com/docs/security/guide#tls";
                if (!n) {
                  if (r && !t)
                    throw (
                      (this._controller.report("user_error.non_https_error", {
                        protocol: e,
                      }),
                      new u.a(a))
                    );
                  !r || t
                    ? window.console &&
                      console.warn(
                        "You may test your Stripe.js integration over HTTP. However, live Stripe.js integrations must use HTTPS."
                      )
                    : window.console && console.warn(a);
                }
              },
            },
            {
              key: "_ensureStripeHosted",
              value: function (e) {
                if (!e)
                  throw (
                    (this._controller.report("user_error.self_hosted"),
                    new u.a(
                      "Stripe.js must be loaded from js.stripe.com. For more information https://stripe.com/docs/stripe-js/reference#including-stripejs"
                    ))
                  );
              },
            },
            {
              key: "_mids",
              value: function () {
                return e._ec ? e._ec.ids() : null;
              },
            },
            {
              key: "_midsPromise",
              value: function () {
                return e._ec ? e._ec.idsPromise() : ce.a.resolve(this._mids());
              },
            },
          ]),
          e
        );
      })();
    (ts.version = 3),
      (ts.stripeJsId = re()),
      (ts._ec =
        ((Vc = new RegExp(
          ""
            .concat(document.location.protocol, "//")
            .concat(document.location.host)
        )),
        "https://checkout.stripe.com/".match(Vc) ? null : Lt()));
    var ns = function (e) {
        var t = X(Ka, e, "StripeWrapperLibrary");
        if ("error" !== t.type) {
          var n = t.value,
            r = n.name,
            a = n.version,
            o = n.startTime;
          this._controller.registerWrapper({
            name: r,
            version: a,
            startTime: o,
          });
        } else
          this._controller.report("register_wrapper.error", {
            error: t.error.message,
          });
      },
      rs = ts,
      as = (function () {
        if (document.currentScript) {
          var e = Object(g.d)(document.currentScript.src);
          return !e || Object(Xe.c)(e.origin);
        }
        return !0;
      })(),
      os = function (e, t) {
        return new rs(
          Object(r.a)({ apiKey: e }, t && "object" == typeof t ? t : {}),
          as
        );
      };
    (os.version = rs.version),
      window.Stripe && 2 === window.Stripe.version && !window.Stripe.StripeV3
        ? (window.Stripe.StripeV3 = os)
        : window.Stripe
        ? window.console &&
          console.warn(
            "It looks like Stripe.js was loaded more than one time. Please only load it once per page."
          )
        : (window.Stripe = os);
    t.default = os;
  },
]);
