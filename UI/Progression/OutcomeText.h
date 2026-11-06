#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Progression
{
    class OutcomeText : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit OutcomeText(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Progression", "OutcomeText") {}
    public:
        void* LabelOf(int s) const { void* args[] = { &s }; return CallStatic("LabelOf", args, 1); }
        void* HexOf(int s) const { void* args[] = { &s }; return CallStatic("HexOf", args, 1); }
        void* Line(int s, const char* text) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(text ? text : "") : nullptr; void* args[] = { &s, managed_1 }; return CallStatic("Line", args, 2); }
        void Append(void* sb, void* o, const char* separator = "\n") const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(separator ? separator : "") : nullptr; void* args[] = { sb, o, managed_2 }; CallStatic("Append", args, 3); }
        void* Format(void* o, const char* separator = "\n") const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(separator ? separator : "") : nullptr; void* args[] = { o, managed_1 }; return CallStatic("Format", args, 2); }
    };
}
