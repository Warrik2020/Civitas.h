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
        void* Render(const char* template_, void* c) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(template_ ? template_ : "") : nullptr; void* args[] = { managed_0, c }; return CallStatic("Render", args, 2); }
        void* Render(const char* template_, void* c, void* parameters, void* castArgs, void* values) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(template_ ? template_ : "") : nullptr; void* args[] = { managed_0, c, parameters, castArgs, values }; return CallStatic("Render", args, 5); }
        void FixArticle(void* sb, const char* next) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(next ? next : "") : nullptr; void* args[] = { sb, managed_1 }; CallStatic("FixArticle", args, 2); }
        void* Resolve(const char* key, void* c) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(key ? key : "") : nullptr; void* args[] = { managed_0, c }; return CallStatic("Resolve", args, 2); }
        void* Resolve(const char* key, void* c, void* parameters, void* castArgs, void* values) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(key ? key : "") : nullptr; void* args[] = { managed_0, c, parameters, castArgs, values }; return CallStatic("Resolve", args, 5); }
        void* Place(void* e, void* c) const { void* args[] = { e, c }; return CallStatic("Place", args, 2); }
        void* Capital(void* w, int nation) const { void* args[] = { w, &nation }; return CallStatic("Capital", args, 2); }
        void* Number(float v) const { void* args[] = { &v }; return CallStatic("Number", args, 1); }
        void Lint(const char* text, bool sentence, void* dst) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(text ? text : "") : nullptr; void* args[] = { managed_0, &sentence, dst }; CallStatic("Lint", args, 3); }
    };
}
