#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class BuildBlockGridJob : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BuildBlockGridJob(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "BuildBlockGridJob") {}
    public:
        int CellOf(void* p, float cell, int wide, int high) const { void* __callArgs[] = { p, &cell, &wide, &high }; return CallStaticValue<int>("CellOf", __callArgs, 4); }
        float ReachOf(void* b) const { void* __callArgs[] = { &b }; return CallStaticValue<float>("ReachOf", __callArgs, 1); }
        bool OnField(void* b) const { void* __callArgs[] = { &b }; return CallStaticValue<bool>("OnField", __callArgs, 1); }
        void Execute() const { Call("Execute", nullptr, 0); }
        void* bats() const { return ReadField<void*>("bats"); }
        void bats(void* value) const { WriteField<void*>("bats", value); }
        void* cellStart() const { return ReadField<void*>("cellStart"); }
        void cellStart(void* value) const { WriteField<void*>("cellStart", value); }
        void* cursor() const { return ReadField<void*>("cursor"); }
        void cursor(void* value) const { WriteField<void*>("cursor", value); }
        void* items() const { return ReadField<void*>("items"); }
        void items(void* value) const { WriteField<void*>("items", value); }
        void* big() const { return ReadField<void*>("big"); }
        void big(void* value) const { WriteField<void*>("big", value); }
        void* meta() const { return ReadField<void*>("meta"); }
        void meta(void* value) const { WriteField<void*>("meta", value); }
        void* proxy() const { return ReadField<void*>("proxy"); }
        void proxy(void* value) const { WriteField<void*>("proxy", value); }
        float cell() const { return ReadField<float>("cell"); }
        void cell(float value) const { WriteField<float>("cell", value); }
        int wide() const { return ReadField<int>("wide"); }
        void wide(int value) const { WriteField<int>("wide", value); }
        int high() const { return ReadField<int>("high"); }
        void high(int value) const { WriteField<int>("high", value); }
        int blockCap() const { return ReadField<int>("blockCap"); }
        void blockCap(int value) const { WriteField<int>("blockCap", value); }
        float bigReach() const { return ReadField<float>("bigReach"); }
        void bigReach(float value) const { WriteField<float>("bigReach", value); }
    };
}
