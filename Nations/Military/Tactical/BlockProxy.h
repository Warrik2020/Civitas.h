#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class BlockProxy : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BlockProxy(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "BlockProxy") {}
    public:
        void* anchor() const { return ReadField<void*>("anchor"); }
        void anchor(void* value) const { WriteField<void*>("anchor", value); }
        void* centre() const { return ReadField<void*>("centre"); }
        void centre(void* value) const { WriteField<void*>("centre", value); }
        void* facing() const { return ReadField<void*>("facing"); }
        void facing(void* value) const { WriteField<void*>("facing", value); }
        float halfWidth() const { return ReadField<float>("halfWidth"); }
        void halfWidth(float value) const { WriteField<float>("halfWidth", value); }
        float depth() const { return ReadField<float>("depth"); }
        void depth(float value) const { WriteField<float>("depth", value); }
        int alive() const { return ReadField<int>("alive"); }
        void alive(int value) const { WriteField<int>("alive", value); }
        int division() const { return ReadField<int>("division"); }
        void division(int value) const { WriteField<int>("division", value); }
        uint8_t side() const { return ReadField<uint8_t>("side"); }
        void side(uint8_t value) const { WriteField<uint8_t>("side", value); }
        uint8_t state() const { return ReadField<uint8_t>("state"); }
        void state(uint8_t value) const { WriteField<uint8_t>("state", value); }
        uint8_t formation() const { return ReadField<uint8_t>("formation"); }
        void formation(uint8_t value) const { WriteField<uint8_t>("formation", value); }
        uint8_t spare() const { return ReadField<uint8_t>("spare"); }
        void spare(uint8_t value) const { WriteField<uint8_t>("spare", value); }
    };
}
