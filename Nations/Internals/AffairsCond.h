#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class AffairsCond : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AffairsCond(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "AffairsCond") {}
    public:
        int Atom() const { return ReadStaticField<int>("Atom"); }
        int And_() const { return ReadStaticField<int>("And"); }
        int Or_() const { return ReadStaticField<int>("Or"); }
        int Not_() const { return ReadStaticField<int>("Not"); }
        int op() const { return ReadField<int>("op"); }
        void op(int value) const { WriteField<int>("op", value); }
        void* a() const { return ReadField<void*>("a"); }
        void a(void* value) const { WriteField<void*>("a", value); }
        void* b() const { return ReadField<void*>("b"); }
        void b(void* value) const { WriteField<void*>("b", value); }
        void* name() const { return ReadField<void*>("name"); }
        void name(void* value) const { WriteField<void*>("name", value); }
        void* args() const { return ReadField<void*>("args"); }
        void args(void* value) const { WriteField<void*>("args", value); }
        void* nums() const { return ReadField<void*>("nums"); }
        void nums(void* value) const { WriteField<void*>("nums", value); }
        void* cmp() const { return ReadField<void*>("cmp"); }
        void cmp(void* value) const { WriteField<void*>("cmp", value); }
        float value() const { return ReadField<float>("value"); }
        void value(float value) const { WriteField<float>("value", value); }
        void* spec() const { return ReadField<void*>("spec"); }
        void spec(void* value) const { WriteField<void*>("spec", value); }
        int line() const { return ReadField<int>("line"); }
        void line(int value) const { WriteField<int>("line", value); }
    };
}
