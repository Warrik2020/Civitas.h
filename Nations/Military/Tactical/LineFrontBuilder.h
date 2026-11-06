#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class LineFrontBuilder : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LineFrontBuilder(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "LineFrontBuilder") {}
    public:
        void Build(int x0, int y0, int x1, int y1, void* side, void* toMetres, float spacing, int smoothPasses, float minLength, void* into) const { void* args[] = { &x0, &y0, &x1, &y1, side, toMetres, &spacing, &smoothPasses, &minLength, into }; CallStatic("Build", args, 10); }
        int ax() const { return ReadField<int>("ax"); }
        void SetAx(int value) const { WriteField<int>("ax", value); }
        int ay() const { return ReadField<int>("ay"); }
        void SetAy(int value) const { WriteField<int>("ay", value); }
        int bx() const { return ReadField<int>("bx"); }
        void SetBx(int value) const { WriteField<int>("bx", value); }
        int by() const { return ReadField<int>("by"); }
        void SetBy(int value) const { WriteField<int>("by", value); }
        bool used() const { return ReadField<bool>("used"); }
        void SetUsed(bool value) const { WriteField<bool>("used", value); }
    };
}
