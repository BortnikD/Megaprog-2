/// <reference path="../jqwidgets.d.ts" />
import { EventEmitter, ElementRef, OnChanges, SimpleChanges } from '@angular/core';
export declare class jqxBarGaugeComponent implements OnChanges {
    attrAnimationDuration: number;
    attrBackgroundColor: string;
    attrBarSpacing: number;
    attrBaseValue: number;
    attrColorScheme: string;
    attrCustomColorScheme: jqwidgets.BarGaugeCustomColorScheme;
    attrDisabled: boolean;
    attrEndAngle: number;
    attrFormatFunction: (value: number, index?: number, color?: string) => string;
    attrLabels: jqwidgets.BarGaugeLabels;
    attrMax: number | string;
    attrMin: number;
    attrRelativeInnerRadius: number | string;
    attrRendered: () => void;
    attrStartAngle: number;
    attrTitle: jqwidgets.BarGaugeTitle;
    attrTooltip: jqwidgets.BarGaugeTooltip;
    attrUseGradient: boolean;
    attrValues: Array<number>;
    attrWidth: string | number;
    attrHeight: string | number;
    autoCreate: boolean;
    properties: string[];
    host: any;
    elementRef: ElementRef;
    widgetObject: jqwidgets.jqxBarGauge;
    constructor(containerElement: ElementRef);
    ngOnInit(): void;
    ngOnChanges(changes: SimpleChanges): boolean;
    arraysEqual(attrValue: any, hostValue: any): boolean;
    manageAttributes(): any;
    moveClasses(parentEl: HTMLElement, childEl: HTMLElement): void;
    moveStyles(parentEl: HTMLElement, childEl: HTMLElement): void;
    createComponent(options?: any): void;
    createWidget(options?: any): void;
    __updateRect__(): void;
    setOptions(options: any): void;
    animationDuration(arg?: number): number;
    backgroundColor(arg?: string): string;
    barSpacing(arg?: number): number;
    baseValue(arg?: number): number;
    colorScheme(arg?: string): string;
    customColorScheme(arg?: jqwidgets.BarGaugeCustomColorScheme): jqwidgets.BarGaugeCustomColorScheme;
    disabled(arg?: boolean): boolean;
    endAngle(arg?: number): number;
    formatFunction(arg?: (value: number, index?: number, color?: string) => string): (value: number, index?: number, color?: string) => string;
    height(arg?: string | number): string | number;
    labels(arg?: jqwidgets.BarGaugeLabels): jqwidgets.BarGaugeLabels;
    max(arg?: number | string): number | string;
    min(arg?: number): number;
    relativeInnerRadius(arg?: number | string): number | string;
    rendered(arg?: () => void): () => void;
    startAngle(arg?: number): number;
    title(arg?: jqwidgets.BarGaugeTitle): jqwidgets.BarGaugeTitle;
    tooltip(arg?: jqwidgets.BarGaugeTooltip): jqwidgets.BarGaugeTooltip;
    useGradient(arg?: boolean): boolean;
    values(arg?: Array<number>): Array<number>;
    width(arg?: string | number): string | number;
    refresh(): void;
    render(): void;
    val(value?: Array<number>): any;
    onDrawEnd: EventEmitter<{}>;
    onDrawStart: EventEmitter<{}>;
    onInitialized: EventEmitter<{}>;
    onTooltipClose: EventEmitter<{}>;
    onTooltipOpen: EventEmitter<{}>;
    onValueChanged: EventEmitter<{}>;
    __wireEvents__(): void;
}
