#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class ProductionLine : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ProductionLine(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "ProductionLine") {}
    public:
        int designId() const { return ReadField<int>("designId"); }
        void SetDesignId(int value) const { WriteField<int>("designId", value); }
        int factories() const { return ReadField<int>("factories"); }
        void SetFactories(int value) const { WriteField<int>("factories", value); }
        int retoolUntilTick() const { return ReadField<int>("retoolUntilTick"); }
        void SetRetoolUntilTick(int value) const { WriteField<int>("retoolUntilTick", value); }
    };
}
