#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class Trial : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit Trial(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "Trial") {}
    public:
        bool made() const { return ReadField<bool>("made"); }
        void made(bool value) const { WriteField<bool>("made", value); }
        int blocking() const { return ReadField<int>("blocking"); }
        void blocking(int value) const { WriteField<int>("blocking", value); }
        void* newProblem() const { return ReadField<void*>("newProblem"); }
        void newProblem(void* value) const { WriteField<void*>("newProblem", value); }
        void* stats() const { return ReadField<void*>("stats"); }
        void stats(void* value) const { WriteField<void*>("stats", value); }
        float score() const { return ReadField<float>("score"); }
        void score(float value) const { WriteField<float>("score", value); }
        float fee() const { return ReadField<float>("fee"); }
        void fee(float value) const { WriteField<float>("fee", value); }
    };
}
