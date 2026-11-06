#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class WeaponIssue : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WeaponIssue(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "WeaponIssue") {}
    public:
        bool blocking() const { return ReadField<bool>("blocking"); }
        void SetBlocking(bool value) const { WriteField<bool>("blocking", value); }
        void* text() const { return ReadField<void*>("text"); }
        void SetText(void* value) const { WriteField<void*>("text", value); }
        int part() const { return ReadField<int>("part"); }
        void SetPart(int value) const { WriteField<int>("part", value); }
    };
}
