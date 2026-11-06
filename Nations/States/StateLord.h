#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::States
{
    class StateLord : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit StateLord(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.States", "StateLord") {}
    public:
        void* givenName() const { return ReadField<void*>("givenName"); }
        void givenName(void* value) const { WriteField<void*>("givenName", value); }
        void* house() const { return ReadField<void*>("house"); }
        void house(void* value) const { WriteField<void*>("house", value); }
        bool female() const { return ReadField<bool>("female"); }
        void female(bool value) const { WriteField<bool>("female", value); }
        float ambition() const { return ReadField<float>("ambition"); }
        void ambition(float value) const { WriteField<float>("ambition", value); }
        int seatedTick() const { return ReadField<int>("seatedTick"); }
        void seatedTick(int value) const { WriteField<int>("seatedTick", value); }
    };
}
