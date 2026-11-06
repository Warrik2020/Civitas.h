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
        void* LabelOf(int s) const { void* __callArgs[] = { &s }; return CallStatic("LabelOf", __callArgs, 1); }
        void* HexOf(int s) const { void* __callArgs[] = { &s }; return CallStatic("HexOf", __callArgs, 1); }
        void* Line(int s, const char* text) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(text ? text : "") : nullptr; void* __callArgs[] = { &s, managed_1 }; return CallStatic("Line", __callArgs, 2); }
        void Append(void* sb, void* o, const char* separator = "\n") const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(separator ? separator : "") : nullptr; void* __callArgs[] = { sb, o, managed_2 }; CallStatic("Append", __callArgs, 3); }
        void* Format(void* o, const char* separator = "\n") const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(separator ? separator : "") : nullptr; void* __callArgs[] = { o, managed_1 }; return CallStatic("Format", __callArgs, 2); }
    };
}
