//
//  Sodium.h
//  Sodium
//
//  Created by Mark Douma on 7/8/2016.
//  Copyright © 2016 Mark Douma. All rights reserved.
//


#ifndef sodium_H
#define sodium_H

#include <Sodium/core.h>
#include <Sodium/crypto_aead_aes256gcm.h>
#include <Sodium/crypto_aead_chacha20poly1305.h>
#include <Sodium/crypto_auth.h>
#include <Sodium/crypto_auth_hmacsha256.h>
#include <Sodium/crypto_auth_hmacsha512.h>
#include <Sodium/crypto_auth_hmacsha512256.h>
#include <Sodium/crypto_box.h>
#include <Sodium/crypto_box_curve25519xsalsa20poly1305.h>
#include <Sodium/crypto_core_hsalsa20.h>
#include <Sodium/crypto_core_hchacha20.h>
#include <Sodium/crypto_core_salsa20.h>
#include <Sodium/crypto_core_salsa2012.h>
#include <Sodium/crypto_core_salsa208.h>
#include <Sodium/crypto_generichash.h>
#include <Sodium/crypto_generichash_blake2b.h>
#include <Sodium/crypto_hash.h>
#include <Sodium/crypto_hash_sha256.h>
#include <Sodium/crypto_hash_sha512.h>
#include <Sodium/crypto_onetimeauth.h>
#include <Sodium/crypto_onetimeauth_poly1305.h>
#include <Sodium/crypto_pwhash.h>
#include <Sodium/crypto_pwhash_argon2i.h>
#include <Sodium/crypto_pwhash_scryptsalsa208sha256.h>
#include <Sodium/crypto_scalarmult.h>
#include <Sodium/crypto_scalarmult_curve25519.h>
#include <Sodium/crypto_secretbox.h>
#include <Sodium/crypto_secretbox_xsalsa20poly1305.h>
#include <Sodium/crypto_shorthash.h>
#include <Sodium/crypto_shorthash_siphash24.h>
#include <Sodium/crypto_sign.h>
#include <Sodium/crypto_sign_ed25519.h>
#include <Sodium/crypto_stream.h>
#include <Sodium/crypto_stream_aes128ctr.h>
#include <Sodium/crypto_stream_chacha20.h>
#include <Sodium/crypto_stream_salsa20.h>
#include <Sodium/crypto_stream_salsa2012.h>
#include <Sodium/crypto_stream_salsa208.h>
#include <Sodium/crypto_stream_xsalsa20.h>
#include <Sodium/crypto_verify_16.h>
#include <Sodium/crypto_verify_32.h>
#include <Sodium/crypto_verify_64.h>
#include <Sodium/randombytes.h>
#ifdef __native_client__
# include <Sodium/randombytes_nativeclient.h>
#endif
#include <Sodium/randombytes_salsa20_random.h>
#include <Sodium/randombytes_sysrandom.h>
#include <Sodium/runtime.h>
#include <Sodium/utils.h>
#include <Sodium/version.h>

#endif
