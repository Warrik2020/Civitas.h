#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class UiIcons : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UiIcons(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "UiIcons") {}
    public:
        void* PartGlyph(int partKind) const { void* __callArgs[] = { &partKind }; return CallStatic("PartGlyph", __callArgs, 1); }
        void* DivisionGlyph(int divisionType) const { void* __callArgs[] = { &divisionType }; return CallStatic("DivisionGlyph", __callArgs, 1); }
        void* PoolGlyph(int poolKind) const { void* __callArgs[] = { &poolKind }; return CallStatic("PoolGlyph", __callArgs, 1); }
        void* Get(void* glyph) const { void* __callArgs[] = { glyph }; return CallStatic("Get", __callArgs, 1); }
        void* Base(void* glyph) const { void* __callArgs[] = { glyph }; return CallStatic("Base", __callArgs, 1); }
        void* Get(void* glyph, int px) const { void* __callArgs[] = { glyph, &px }; return CallStatic("Get", __callArgs, 2); }
        void Bind(void* img, void* glyph) const { void* __callArgs[] = { img, glyph }; CallStatic("Bind", __callArgs, 2); }
        bool IsColour(void* glyph) const { void* __callArgs[] = { glyph }; return CallStaticValue<bool>("IsColour", __callArgs, 1); }
        bool IsEraArt(void* glyph) const { void* __callArgs[] = { glyph }; return CallStaticValue<bool>("IsEraArt", __callArgs, 1); }
    };
}
