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
        int CellOf(void* p, float cell, int wide, int high) const { void* args[] = { p, &cell, &wide, &high }; return CallStaticValue<int>("CellOf", args, 4); }
        float ReachOf(void* b) const { void* args[] = { &b }; return CallStaticValue<float>("ReachOf", args, 1); }
        bool OnField(void* b) const { void* args[] = { &b }; return CallStaticValue<bool>("OnField", args, 1); }
        void Execute() const { Call("Execute", nullptr, 0); }
        void* bats() const { return ReadField<void*>("bats"); }
        void SetBats(void* value) const { WriteField<void*>("bats", value); }
        void* cellStart() const { return ReadField<void*>("cellStart"); }
        void SetCellStart(void* value) const { WriteField<void*>("cellStart", value); }
        void* cursor() const { return ReadField<void*>("cursor"); }
        void SetCursor(void* value) const { WriteField<void*>("cursor", value); }
        void* items() const { return ReadField<void*>("items"); }
        void SetItems(void* value) const { WriteField<void*>("items", value); }
        void* big() const { return ReadField<void*>("big"); }
        void SetBig(void* value) const { WriteField<void*>("big", value); }
        void* meta() const { return ReadField<void*>("meta"); }
        void SetMeta(void* value) const { WriteField<void*>("meta", value); }
        void* proxy() const { return ReadField<void*>("proxy"); }
        void SetProxy(void* value) const { WriteField<void*>("proxy", value); }
        float cell() const { return ReadField<float>("cell"); }
        void SetCell(float value) const { WriteField<float>("cell", value); }
        int wide() const { return ReadField<int>("wide"); }
        void SetWide(int value) const { WriteField<int>("wide", value); }
        int high() const { return ReadField<int>("high"); }
        void SetHigh(int value) const { WriteField<int>("high", value); }
        int blockCap() const { return ReadField<int>("blockCap"); }
        void SetBlockCap(int value) const { WriteField<int>("blockCap", value); }
        float bigReach() const { return ReadField<float>("bigReach"); }
        void SetBigReach(float value) const { WriteField<float>("bigReach", value); }
    };
}
