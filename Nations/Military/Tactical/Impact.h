#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class Impact : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit Impact(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "Impact") {}
    public:
        void* from() const { return ReadField<void*>("from"); }
        void from(void* value) const { WriteField<void*>("from", value); }
        void* at() const { return ReadField<void*>("at"); }
        void at(void* value) const { WriteField<void*>("at", value); }
        int shooter() const { return ReadField<int>("shooter"); }
        void shooter(int value) const { WriteField<int>("shooter", value); }
        int target() const { return ReadField<int>("target"); }
        void target(int value) const { WriteField<int>("target", value); }
        int arrive() const { return ReadField<int>("arrive"); }
        void arrive(int value) const { WriteField<int>("arrive", value); }
        int attackerDiv() const { return ReadField<int>("attackerDiv"); }
        void attackerDiv(int value) const { WriteField<int>("attackerDiv", value); }
        float power() const { return ReadField<float>("power"); }
        void power(float value) const { WriteField<float>("power", value); }
        float radius() const { return ReadField<float>("radius"); }
        void radius(float value) const { WriteField<float>("radius", value); }
        uint8_t kind() const { return ReadField<uint8_t>("kind"); }
        void kind(uint8_t value) const { WriteField<uint8_t>("kind", value); }
        uint8_t side() const { return ReadField<uint8_t>("side"); }
        void side(uint8_t value) const { WriteField<uint8_t>("side", value); }
        uint8_t maxKills() const { return ReadField<uint8_t>("maxKills"); }
        void maxKills(uint8_t value) const { WriteField<uint8_t>("maxKills", value); }
        uint8_t hitsOnTarget() const { return ReadField<uint8_t>("hitsOnTarget"); }
        void hitsOnTarget(uint8_t value) const { WriteField<uint8_t>("hitsOnTarget", value); }
    };
}
