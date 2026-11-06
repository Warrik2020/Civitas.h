#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class AffairsText : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AffairsText(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "AffairsText") {}
    public:
        void* Render(const char* template_, void* c) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(template_ ? template_ : "") : nullptr; void* __callArgs[] = { managed_0, c }; return CallStatic("Render", __callArgs, 2); }
        void* Render(const char* template_, void* c, void* parameters, void* castArgs, void* values) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(template_ ? template_ : "") : nullptr; void* __callArgs[] = { managed_0, c, parameters, castArgs, values }; return CallStatic("Render", __callArgs, 5); }
        void FixArticle(void* sb, const char* next) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(next ? next : "") : nullptr; void* __callArgs[] = { sb, managed_1 }; CallStatic("FixArticle", __callArgs, 2); }
        void* Resolve(const char* key, void* c) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(key ? key : "") : nullptr; void* __callArgs[] = { managed_0, c }; return CallStatic("Resolve", __callArgs, 2); }
        void* Resolve(const char* key, void* c, void* parameters, void* castArgs, void* values) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(key ? key : "") : nullptr; void* __callArgs[] = { managed_0, c, parameters, castArgs, values }; return CallStatic("Resolve", __callArgs, 5); }
        void* Place(void* e, void* c) const { void* __callArgs[] = { e, c }; return CallStatic("Place", __callArgs, 2); }
        void* Capital(void* w, int nation) const { void* __callArgs[] = { w, &nation }; return CallStatic("Capital", __callArgs, 2); }
        void* Number(float v) const { void* __callArgs[] = { &v }; return CallStatic("Number", __callArgs, 1); }
        void Lint(const char* text, bool sentence, void* dst) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(text ? text : "") : nullptr; void* __callArgs[] = { managed_0, &sentence, dst }; CallStatic("Lint", __callArgs, 3); }
    };
}
