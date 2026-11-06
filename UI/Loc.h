#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class Loc : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit Loc(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "Loc") {}
    public:
        void* NativeName(int language) const { void* args[] = { &language }; return CallStatic("NativeName", args, 1); }
        void Set(int language) const { void* args[] = { &language }; CallStatic("Set", args, 1); }
        void* T(const char* english) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(english ? english : "") : nullptr; void* args[] = { managed_0 }; return CallStatic("T", args, 1); }
        void* Bind(void* text, const char* english = nullptr) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(english ? english : "") : nullptr; void* args[] = { text, managed_1 }; return CallStatic("Bind", args, 2); }
        void* Bind(void* button, const char* english = nullptr) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(english ? english : "") : nullptr; void* args[] = { button, managed_1 }; return CallStatic("Bind", args, 2); }
        void Unbind(void* text) const { void* args[] = { text }; CallStatic("Unbind", args, 1); }
        void* All() const { return ReadStaticField<void*>("All"); }
        void* text() const { return ReadField<void*>("text"); }
        void SetText(void* value) const { WriteField<void*>("text", value); }
        void* english() const { return ReadField<void*>("english"); }
        void SetEnglish(void* value) const { WriteField<void*>("english", value); }
    };
}
