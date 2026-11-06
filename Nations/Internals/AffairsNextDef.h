#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class AffairsNextDef : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AffairsNextDef(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "AffairsNextDef") {}
    public:
        void* step() const { return ReadField<void*>("step"); }
        void SetStep(void* value) const { WriteField<void*>("step", value); }
        void* story() const { return ReadField<void*>("story"); }
        void SetStory(void* value) const { WriteField<void*>("story", value); }
        float weight() const { return ReadField<float>("weight"); }
        void SetWeight(float value) const { WriteField<float>("weight", value); }
        void* cond() const { return ReadField<void*>("cond"); }
        void SetCond(void* value) const { WriteField<void*>("cond", value); }
        int line() const { return ReadField<int>("line"); }
        void SetLine(int value) const { WriteField<int>("line", value); }
    };
}
