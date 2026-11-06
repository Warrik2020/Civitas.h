#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class AffairsMarkDef : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AffairsMarkDef(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "AffairsMarkDef") {}
    public:
        void* id() const { return ReadField<void*>("id"); }
        void SetId(void* value) const { WriteField<void*>("id", value); }
        void* file() const { return ReadField<void*>("file"); }
        void SetFile(void* value) const { WriteField<void*>("file", value); }
        int line() const { return ReadField<int>("line"); }
        void SetLine(int value) const { WriteField<int>("line", value); }
        void* text() const { return ReadField<void*>("text"); }
        void SetText(void* value) const { WriteField<void*>("text", value); }
        float fadeYears() const { return ReadField<float>("fadeYears"); }
        void SetFadeYears(float value) const { WriteField<float>("fadeYears", value); }
        bool stacks() const { return ReadField<bool>("stacks"); }
        void SetStacks(bool value) const { WriteField<bool>("stacks", value); }
        void* mods() const { return ReadField<void*>("mods"); }
    };
}
