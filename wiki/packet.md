```

struct MessageHandshakeInitiation {
  uint32 type;                                              //握手类型 1=发起 2=回应
  uint32 sender_key_id;                                     //是一个随机数,但在hash table里指向了一个peer
  uint8 ephemeral[WG_PUBLIC_KEY_LEN];                       //gon
  uint8 static_enc[WG_PUBLIC_KEY_LEN + WG_MAC_LEN];         //
  uint8 timestamp_enc[WG_TIMESTAMP_LEN + WG_MAC_LEN];       //时间戳
  MessageMacs mac;                                          //消息的真实mac地址
};


//handshack
01 00 00 00                                     //type              4
39 fe c7 dd                                     //sender_key_id     4

19 66 e8 ff                                     //ephemeral         32
dd eb 13 c1
51 a6 15 df
5b b3 34 42
                                                //48
                                                //48


b4 49 91 c0 73 04 19 ae
0040   78 4a 3d 5d c5 49 2d 0c 44 ab 5f ae ba e2 3e 98
0050   c2 6f 3f b2 18 12 20 a7 8e d2 54 84 d5 b9 4f 0d
0060   2b 7b a2 7a 78 87 a1 95 85 2c c4 cd 40 19 75 29
0070   99 a5 68 e5 f4 44 32 0f 6d 52 34 16 89 c8 eb 09
0080   3d 0f 0b eb b7 4f d6 da 4e 66 e9 4c e8 d0 f9 78
0090   4f 47 fc d9 22 1d 23 d0 71 1f 8c e5 36 6d 90 1c
00a0   13 1f 7c 6f

00 00 00 00                             //mac
00 00 00 00
00 00 00 00
00 00 00 00


```