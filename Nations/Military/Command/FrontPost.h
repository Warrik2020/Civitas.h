#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Command
{
    class FrontPost : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FrontPost(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Command", "FrontPost") {}
    public:
        int id() const { return ReadField<int>("id"); }
        void id(int value) const { WriteField<int>("id", value); }
        int piece() const { return ReadField<int>("piece"); }
        void piece(int value) const { WriteField<int>("piece", value); }
        float s() const { return ReadField<float>("s"); }
        void s(float value) const { WriteField<float>("s", value); }
        void* border() const { return ReadField<void*>("border"); }
        void border(void* value) const { WriteField<void*>("border", value); }
        void* pos() const { return ReadField<void*>("pos"); }
        void pos(void* value) const { WriteField<void*>("pos", value); }
        void* outward() const { return ReadField<void*>("outward"); }
        void outward(void* value) const { WriteField<void*>("outward", value); }
        int foe() const { return ReadField<int>("foe"); }
        void foe(int value) const { WriteField<int>("foe", value); }
        float threat() const { return ReadField<float>("threat"); }
        void threat(float value) const { WriteField<float>("threat", value); }
        float value() const { return ReadField<float>("value"); }
        void value(float value) const { WriteField<float>("value", value); }
        float weight() const { return ReadField<float>("weight"); }
        void weight(float value) const { WriteField<float>("weight", value); }
    };
}
