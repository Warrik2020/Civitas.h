#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class AffairsEventDef : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AffairsEventDef(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "AffairsEventDef") {}
    public:
        void* id() const { return ReadField<void*>("id"); }
        void SetId(void* value) const { WriteField<void*>("id", value); }
        void* parameters() const { return ReadField<void*>("parameters"); }
        void SetParameters(void* value) const { WriteField<void*>("parameters", value); }
        void* headlines() const { return ReadField<void*>("headlines"); }
        void* lines() const { return ReadField<void*>("lines"); }
        void* file() const { return ReadField<void*>("file"); }
        void SetFile(void* value) const { WriteField<void*>("file", value); }
        int line() const { return ReadField<int>("line"); }
        void SetLine(int value) const { WriteField<int>("line", value); }
    };
}
