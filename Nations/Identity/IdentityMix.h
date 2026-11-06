#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Identity
{
    class IdentityMix : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit IdentityMix(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Identity", "IdentityMix") {}
    public:
        void* Pure(int groupId) const { void* __callArgs[] = { &groupId }; return CallStatic("Pure", __callArgs, 1); }
        void* Relabel(uint16_t fromKey, uint16_t toKey) const { void* __callArgs[] = { &fromKey, &toKey }; return Call("Relabel", __callArgs, 2); }
        void* AddFromWilderness(uint16_t key, int amount) const { void* __callArgs[] = { &key, &amount }; return Call("AddFromWilderness", __callArgs, 2); }
        void* Transfer(uint16_t fromKey, uint16_t toKey, int delta) const { void* __callArgs[] = { &fromKey, &toKey, &delta }; return Call("Transfer", __callArgs, 3); }
        void* Remove(uint16_t key, int amount) const { void* __callArgs[] = { &key, &amount }; return Call("Remove", __callArgs, 2); }
        void* WithoutKey(uint16_t key) const { void* __callArgs[] = { &key }; return Call("WithoutKey", __callArgs, 1); }
        void* Evict(int minShare, uint16_t exemptKey = 0) const { void* __callArgs[] = { &minShare, &exemptKey }; return Call("Evict", __callArgs, 2); }
        int IsoShare() const { return ReadStaticField<int>("IsoShare"); }
        uint16_t id0() const { return ReadField<uint16_t>("id0"); }
        void id0(uint16_t value) const { WriteField<uint16_t>("id0", value); }
        uint16_t id1() const { return ReadField<uint16_t>("id1"); }
        void id1(uint16_t value) const { WriteField<uint16_t>("id1", value); }
        uint16_t id2() const { return ReadField<uint16_t>("id2"); }
        void id2(uint16_t value) const { WriteField<uint16_t>("id2", value); }
        uint8_t share0() const { return ReadField<uint8_t>("share0"); }
        void share0(uint8_t value) const { WriteField<uint8_t>("share0", value); }
        uint8_t share1() const { return ReadField<uint8_t>("share1"); }
        void share1(uint8_t value) const { WriteField<uint8_t>("share1", value); }
        uint8_t share2() const { return ReadField<uint8_t>("share2"); }
        void share2(uint8_t value) const { WriteField<uint8_t>("share2", value); }
        float TintMin() const { return ReadStaticField<float>("TintMin"); }
        float TintCurve() const { return ReadStaticField<float>("TintCurve"); }
    };
}
