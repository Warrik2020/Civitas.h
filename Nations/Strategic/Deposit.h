#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Strategic
{
    class Deposit : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit Deposit(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Strategic", "Deposit") {}
    public:
        int tile() const { return ReadField<int>("tile"); }
        void tile(int value) const { WriteField<int>("tile", value); }
        int kind() const { return ReadField<int>("kind"); }
        void kind(int value) const { WriteField<int>("kind", value); }
        uint8_t richness() const { return ReadField<uint8_t>("richness"); }
        void richness(uint8_t value) const { WriteField<uint8_t>("richness", value); }
    };
}
