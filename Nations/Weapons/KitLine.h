#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class KitLine : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit KitLine(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "KitLine") {}
    public:
        int slot() const { return ReadField<int>("slot"); }
        void SetSlot(int value) const { WriteField<int>("slot", value); }
        int designId() const { return ReadField<int>("designId"); }
        void SetDesignId(int value) const { WriteField<int>("designId", value); }
        int count() const { return ReadField<int>("count"); }
        void SetCount(int value) const { WriteField<int>("count", value); }
    };
}
